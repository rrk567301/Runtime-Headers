@class NSString, NSMutableDictionary, BRCAccountSession;

@interface BRCSyncContextProvider : NSObject <BRCReclaimMemoryDelegate> {
    NSMutableDictionary *_syncContexts;
    BRCAccountSession *_session;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountSession:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)allSyncContexts;
- (id)_syncContextForContextIdentifier:(id)a0 isShared:(BOOL)a1 createIfNeeded:(BOOL)a2;
- (id)_syncContextIdentifierForMangledID:(id)a0 metadata:(BOOL)a1;
- (void)closeSyncContexts;
- (id)defaultSyncContext;
- (id)metadataSyncContextForMangledID:(id)a0;
- (void)reclaimMemory;
- (id)sharedMetadataSyncContext;
- (id)sideCarSyncContext;
- (id)transferSyncContextForMangledID:(id)a0;
- (id)transferSyncContextForMangledID:(id)a0 createIfNeeded:(BOOL)a1;
- (id)zoneHealthSyncContext;

@end
