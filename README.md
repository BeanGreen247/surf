# surf - simple webkit-based browser

surf is a simple Web browser based on WebKit/GTK+.

Some changes were made by me.

# Build
```
sudo apt install -y git cmake automake valac libgtk-3-dev libsoup2.4-dev libgranite-dev libgda-5.0-dev libjson-glib-dev libwebkit2gtk-4.0-dev meson xsltproc help2man texinfo
```
Clone the repo and cd into it
```
git clone https://github.com/BeanGreen247/surf.git
cd surf
```
Follow the steps
```
cd libxml2-2.9.10/
./configure --prefix=/usr    \
            --disable-static \
            --with-history   \
            --with-python=/usr/bin/python3 &&
make -j4
sudo make install
cd ..
```
```
cd libxslt-1.1.34/
sed -i s/3000/5000/ libxslt/transform.c doc/xsltproc.{1,xml} &&
./configure --prefix=/usr --disable-static                   &&
make -j4
sudo make install
cd ..
```
```
cd pcre-8.44/
./configure --prefix=/usr                     \
            --docdir=/usr/share/doc/pcre-8.44 \
            --enable-unicode-properties       \
            --enable-pcre16                   \
            --enable-pcre32                   \
            --enable-pcregrep-libz            \
            --disable-static                 &&
make -j4
sudo make install                     &&
mv -v /usr/lib/libpcre.so.* /lib &&
ln -sfv ../../lib/$(readlink /usr/lib/libpcre.so) /usr/lib/libpcre.so
cd ..
```
```
cd glib-2.64.0/
rm -rf build
mkdir build &&
cd    build &&
meson --prefix=/usr      \
      ..                 &&
ninja
sudo ninja install &&
sudo mkdir -p /usr/share/doc/glib-2.64.0 && 
sudo cp -r ../docs/reference/{NEWS,gio,glib,gobject} /usr/share/doc/glib-2.64.0 
cd ..
cd ..
```
```
cd libgpg-error-1.37/
./configure --prefix=/usr &&
make -j4 &&
sudo make install
cd ..
```
```
cd pth-2.0.7/
sed -i 's#$(LOBJS): Makefile#$(LOBJS): pth_p.h Makefile#' Makefile.in &&
./configure --prefix=/usr           \
            --disable-static        \
            --mandir=/usr/share/man &&
make
sudo make install &&
sudo install -v -m755 -d /usr/share/doc/pth-2.0.7 &&
sudo install -v -m644    README PORTING SUPPORT TESTS \
                    /usr/share/doc/pth-2.0.7
cd ..
```
```
cd libgcrypt-1.8.5/
./configure --prefix=/usr &&
make -j4 &&
sudo make install
cd ..
```
```
cd libtasn1-4.16.0/
./configure --prefix=/usr --disable-static &&
make -j4 &&
sudo make install
cd ..
```
```
cd make-ca-1.7/
sudo make install
cd ..
```
```
cd p11-kit-0.23.20/
sed '20,$ d' -i trust/trust-extract-compat.in &&
cat >> trust/trust-extract-compat.in << "EOF"
# Copy existing anchor modifications to /etc/ssl/local
/usr/libexec/make-ca/copy-trust-modifications
# Generate a new trust store
/usr/sbin/make-ca -f -g
EOF
./configure --prefix=/usr     \
            --sysconfdir=/etc \
            --with-trust-paths=/etc/pki/anchors &&
make -j4 &&
sudo make install
cd ..
```
```
cd gcr-3.34.0/
sed -i -r 's:"(/desktop):"/org/gnome\1:' schema/*.xml &&
./configure --prefix=/usr &&
make -j4 &&
sudo make install
cd ..
```
Install
```
sudo make clean install
```

to add bookmarks create ~/.surf/bookmarks file and add links
```
vim ~/.surf/bookmarks
```
# TODO
* Implement downloading of files
* Implement uploading of files
