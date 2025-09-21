@class BRCItemID, NSString, CKShare, BRCServerZone, CKRecord;

@interface BRCSharingModifyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    BRCServerZone *_serverZone;
    CKShare *_share;
    BRCItemID *_itemID;
    CKRecord *_sharingIdentityPreparedRecord;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (oneway void)invalidate;
- (void)main;
- (id)createActivity;
- (void)_performAfterCopyingPublicSharingKeyWithRecordID:(id)a0 completion:(id /* block */)a1;
- (void)_performAfterFetchingSharingIdentityOnDirectoryItem:(id)a0 wantRoutingKey:(char)a1 completion:(id /* block */)a2;
- (void)_performAfterFetchingSharingIdentityOnDocumentItem:(id)a0 wantRoutingKey:(char)a1 completion:(id /* block */)a2;
- (void)_performAfterFetchingiWorkRoutingTokenIfNecessary:(id)a0 completion:(id /* block */)a1;
- (void)_performAfterFetchingiWorkSharingIdentityOnItem:(id)a0 wantRoutingKey:(char)a1 completion:(id /* block */)a2;
- (void)_performAfterGettingPublicSharingKeyForRecord:(id)a0 completion:(id /* block */)a1;
- (void)_performAfterPreparingSharingIdentityIfNecessaryWhenWantRoutingKey:(char)a0 completion:(id /* block */)a1;
- (char)_shouldFetchSharingIdentity:(char)a0;
- (void)_updateDBAndSyncDownIfNeededWithShare:(id)a0 recordsToLearnCKInfo:(id)a1;
- (id)initWithName:(id)a0 zone:(id)a1 share:(id)a2 sessionContext:(id)a3;
- (void)performAfterPreparingSharingIdentityIfNecessary:(id /* block */)a0;

@end
