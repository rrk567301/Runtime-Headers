@class BRCAccountSession, NSMutableDictionary;

@interface BRCSyncContextProvider : NSObject {
    NSMutableDictionary *_syncContexts;
    BRCAccountSession *_session;
}

- (void).cxx_destruct;
- (id)allSyncContexts;
- (id)_syncContextForContextIdentifier:(id)a0 isShared:(char)a1 createIfNeeded:(char)a2;
- (id)_syncContextIdentifierForMangledID:(id)a0 metadata:(char)a1;
- (void)closeSyncContexts;
- (id)defaultSyncContext;
- (id)initWithAccountSession:(id)a0;
- (id)metadataSyncContextForMangledID:(id)a0;
- (id)sharedMetadataSyncContext;
- (id)sideCarSyncContext;
- (id)transferSyncContextForMangledID:(id)a0;
- (id)transferSyncContextForMangledID:(id)a0 createIfNeeded:(char)a1;
- (id)zoneHealthSyncContext;

@end
