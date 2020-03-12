# surf - simple webkit-based browser

surf is a simple Web browser based on WebKit/GTK+.

Some changes were made by me.

# Build
```
sudo apt install -y git cmake valac libgtk-3-dev libsoup2.4-dev libgranite-dev libgda-5.0-dev libjson-glib-dev libwebkit2gtk-4.0-dev meson xsltproc
```
Clone the repo and cd into it
```
git clone <repolink>
cd surf
```
Follow the steps
```
cd glib-2.64.0/
rm -rf build
mkdir build &&
cd    build &&
meson --prefix=/usr      \xsltproc
      -Dman=true         \
      -Dselinux=disabled \
      ..                 &&
ninja
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
cd..
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
