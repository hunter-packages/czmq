/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
#ifndef Q_ZCERTSTORE_H
#define Q_ZCERTSTORE_H

#include "qczmq.h"

class QT_CZMQ_EXPORT QZcertstore : public QObject
{
    Q_OBJECT
public:

    //  Copy-construct to return the proper wrapped c types
    QZcertstore (zcertstore_t *self, QObject *qObjParent = 0);

    //  Create a new certificate store from a disk directory, loading and
    //  indexing all certificates in that location. The directory itself may be
    //  absent, and created later, or modified at any time. The certificate store
    //  is automatically refreshed on any zcertstore_lookup() call. If the
    //  location is specified as NULL, creates a pure-memory store, which you
    //  can work with by inserting certificates at runtime.
    explicit QZcertstore (const QString &location, QObject *qObjParent = 0);

    //  Destroy a certificate store object in memory. Does not affect anything
    //  stored on disk.
    ~QZcertstore ();

    //  Override the default disk loader with a custom loader fn.
    void setLoader (zcertstore_loader loader, zcertstore_destructor destructor, void *state);

    //  Look up certificate by public key, returns zcert_t object if found,
    //  else returns NULL. The public key is provided in Z85 text format.
    QZcert * lookup (const QString &publicKey);

    //  Insert certificate into certificate store in memory. Note that this
    //  does not save the certificate to disk. To do that, use zcert_save()
    //  directly on the certificate. Takes ownership of zcert_t object.
    void insert (QZcert *certP);

    //  Empty certificate hashtable. This wrapper exists to be friendly to bindings,
    //  which don't usually have access to struct internals.
    void empty ();

    //  Print list of certificates in store to logging facility
    void print ();

    //  Return a list of all the certificates in the store.
    //  The caller takes ownership of the zlistx_t object and is responsible
    //  for destroying it.  The caller does not take ownership of the zcert_t
    //  objects.
    QZlistx * certs ();

    //  Self test of this class
    static void test (bool verbose);

    zcertstore_t *self;
};
#endif //  Q_ZCERTSTORE_H
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
