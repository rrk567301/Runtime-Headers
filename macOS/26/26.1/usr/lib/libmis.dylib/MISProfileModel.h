@class MISDBManager;

@interface MISProfileModel : NSObject {
    MISDBManager *_weak_db;
}

- (void).cxx_destruct;
- (id)getCertPrimaryKey:(id)a0;
- (id)initWithDB:(id)a0;
- (int)insertProfile:(void *)a0;
- (int)insertSigningIdentities:(id)a0 withProfileUUID:(id)a1;
- (BOOL)isProfileInstalled:(id)a0;
- (BOOL)queryCMSBlobForProfile:(id)a0 forcingXML:(BOOL)a1 handler:(id /* block */)a2;
- (void *)queryProfile:(id)a0;

@end
