
/* This file is generated by glib-mkenums, do not modify it. This code is licensed under the same license as the containing project. Note that it links to GLib, so must comply with the LGPL linking clauses. */


#include <glib-object.h>
#include "gck/gck.h"
/* enumerations from "gck/gck.h" */
GType gck_error_get_type (void) G_GNUC_CONST;

GType
gck_error_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GEnumValue values[] = {
            { GCK_ERROR_MODULE_PROBLEM, "GCK_ERROR_MODULE_PROBLEM", "problem" },
            { 0, NULL, NULL }
        };
        etype = g_enum_register_static (g_intern_static_string ("GckError"), values);
    }
    return etype;
}
GType gck_session_options_get_type (void) G_GNUC_CONST;

GType
gck_session_options_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GFlagsValue values[] = {
            { GCK_SESSION_READ_ONLY, "GCK_SESSION_READ_ONLY", "read-only" },
            { GCK_SESSION_READ_WRITE, "GCK_SESSION_READ_WRITE", "read-write" },
            { GCK_SESSION_LOGIN_USER, "GCK_SESSION_LOGIN_USER", "login-user" },
            { GCK_SESSION_AUTHENTICATE, "GCK_SESSION_AUTHENTICATE", "authenticate" },
            { 0, NULL, NULL }
        };
        etype = g_flags_register_static (g_intern_static_string ("GckSessionOptions"), values);
    }
    return etype;
}
GType gck_builder_flags_get_type (void) G_GNUC_CONST;

GType
gck_builder_flags_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GEnumValue values[] = {
            { GCK_BUILDER_NONE, "GCK_BUILDER_NONE", "none" },
            { GCK_BUILDER_SECURE_MEMORY, "GCK_BUILDER_SECURE_MEMORY", "secure-memory" },
            { 0, NULL, NULL }
        };
        etype = g_enum_register_static (g_intern_static_string ("GckBuilderFlags"), values);
    }
    return etype;
}
GType gck_uri_error_get_type (void) G_GNUC_CONST;

GType
gck_uri_error_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GEnumValue values[] = {
            { GCK_URI_BAD_SCHEME, "GCK_URI_BAD_SCHEME", "bad-scheme" },
            { GCK_URI_BAD_ENCODING, "GCK_URI_BAD_ENCODING", "bad-encoding" },
            { GCK_URI_BAD_SYNTAX, "GCK_URI_BAD_SYNTAX", "bad-syntax" },
            { GCK_URI_BAD_VERSION, "GCK_URI_BAD_VERSION", "bad-version" },
            { GCK_URI_NOT_FOUND, "GCK_URI_NOT_FOUND", "not-found" },
            { 0, NULL, NULL }
        };
        etype = g_enum_register_static (g_intern_static_string ("GckUriError"), values);
    }
    return etype;
}
GType gck_uri_flags_get_type (void) G_GNUC_CONST;

GType
gck_uri_flags_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GFlagsValue values[] = {
            { GCK_URI_FOR_OBJECT, "GCK_URI_FOR_OBJECT", "for-object" },
            { GCK_URI_FOR_TOKEN, "GCK_URI_FOR_TOKEN", "for-token" },
            { GCK_URI_FOR_MODULE, "GCK_URI_FOR_MODULE", "for-module" },
            { GCK_URI_WITH_VERSION, "GCK_URI_WITH_VERSION", "with-version" },
            { GCK_URI_FOR_ANY, "GCK_URI_FOR_ANY", "for-any" },
            { 0, NULL, NULL }
        };
        etype = g_flags_register_static (g_intern_static_string ("GckUriFlags"), values);
    }
    return etype;
}
 /**/

/* Generated data ends here */
