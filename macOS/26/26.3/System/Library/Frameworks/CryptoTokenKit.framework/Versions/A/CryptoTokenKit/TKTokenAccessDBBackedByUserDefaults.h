@class NSString, NSUserDefaults;

@interface TKTokenAccessDBBackedByUserDefaults : NSObject <TKTokenAccessDB> {
    NSUserDefaults *_db;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_installationKeyForBundleID:(id)a0;
- (id)_keyRefForRequest:(id)a0;
- (id)allStoredBundleIDs;
- (void)clearAllAccessRecords;
- (long long)fetchAccessForRequest:(id)a0;
- (id)fetchStoredInstallationIDForBundleID:(id)a0;
- (void)removeAccessForBundleID:(id)a0 matchPartial:(BOOL)a1;
- (void)storeAccess:(long long)a0 forRequest:(id)a1;
- (void)storeInstallationID:(id)a0 forBundleID:(id)a1;

@end
