@class BRCAccountSession, NSMutableDictionary;

@interface BRCSyncContextProvider : NSObject {
    NSMutableDictionary *_syncContexts;
    BRCAccountSession *_session;
}

- (id)initWithAccountSession:(id)a0;
- (void).cxx_destruct;
- (id)allSyncContexts;
- (id)_syncContextForContextIdentifier:(id)a0 isShared:(BOOL)a1 createIfNeeded:(BOOL)a2;
- (id)_syncContextIdentifierForMangledID:(id)a0 metadata:(BOOL)a1;
- (void)closeSyncContexts;
- (id)defaultSyncContext;
- (id)metadataSyncContextForMangledID:(id)a0;
- (id)sharedMetadataSyncContext;
- (id)sideCarSyncContext;
- (id)transferSyncContextForMangledID:(id)a0;
- (id)transferSyncContextForMangledID:(id)a0 createIfNeeded:(BOOL)a1;
- (id)zoneHealthSyncContext;

@end
