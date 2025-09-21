@class NSString, NSMutableDictionary, NSURL, EWSExchangeServiceBinding;

@interface NFEWSAccountProxy : ICNFMCAccountProxy <NFAccountProxy> {
    NSMutableDictionary *_foldersByObjectID;
}

@property (nonatomic) char useExternalURL;
@property (retain, nonatomic) NSString *folderHierarchySyncState;
@property (readonly) EWSExchangeServiceBinding *exchangeServiceBinding;
@property (retain) NSURL *internalURL;
@property (retain) NSURL *externalURL;
@property (retain) NSURL *lastUsedAutodiscoverURL;
@property (copy) NSString *rootFolderId;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *parentACAccountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extendedFieldsForEWSNoteType;
+ (id)_newExtendedFieldTypeForPropertyId:(long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithManagedObject:(id)a0;
- (id)_sendMessage:(id)a0;
- (char)hasNotes;
- (void)updateAllMailboxContentsFromServer;
- (void)updateMailboxListFromServer;
- (id)parentACAccount;
- (void)_autodiscoverSettings;
- (id)_connectAndAuthenticate;
- (void)_createOrUpdateFolder:(id)a0 deletedItemsFolderId:(id)a1;
- (id)_deleteFolder:(id)a0;
- (id)_fetchDistinguishedFolderInfo:(id)a0 error:(id *)a1 errorCode:(long long *)a2;
- (id)_fetchFolderInfoForId:(id)a0 error:(id *)a1;
- (id)_newEWSCreateFolderForFolder:(id)a0 inParent:(id)a1;
- (id)_newEWSCreateItemForNote:(id)a0 inFolder:(id)a1;
- (id)_newEWSDeleteFolderWithFolderId:(id)a0;
- (id)_newEWSDeleteItemForNoteWithRemoteID:(id)a0;
- (id)_newEWSMoveFolderForFolder:(id)a0 toParent:(id)a1;
- (id)_newEWSMoveItemForNote:(id)a0 toFolder:(id)a1;
- (id)_newEWSSetItemFieldForBody:(id)a0;
- (id)_newEWSSetItemFieldForSubject:(id)a0;
- (id)_newEWSUpdateFolderForFolder:(id)a0;
- (id)_newEWSUpdateItemForNote:(id)a0;
- (char)_processCreateFolderResponse:(id)a0 forFolder:(id)a1 responseCode:(long long *)a2;
- (char)_processCreateItemResponse:(id)a0 forNote:(id)a1 responseCode:(long long *)a2;
- (char)_processDeleteFolderResponse:(id)a0 forFolderId:(id)a1 responseCode:(long long *)a2;
- (char)_processDeleteItemResponse:(id)a0 responseCode:(long long *)a1;
- (char)_processMoveFolderResponse:(id)a0 forFolder:(id)a1 responseCode:(long long *)a2;
- (char)_processMoveItemResponse:(id)a0 forNote:(id)a1 responseCode:(long long *)a2;
- (char)_processUpdateFolderResponse:(id)a0 forFolder:(id)a1 responseCode:(long long *)a2;
- (char)_processUpdateItemResponse:(id)a0 forNote:(id)a1 responseCode:(long long *)a2;
- (id)_syncFolderHierarchyRequestWithSyncState:(id)a0;
- (char)addFolderToRemote:(id)a0 inParent:(id)a1 responseCode:(long long *)a2;
- (char)addNoteToRemote:(id)a0 inFolder:(id)a1 responseCode:(long long *)a2;
- (char)deleteFolderFromRemoteWithId:(id)a0 responseCode:(long long *)a1;
- (char)deleteNoteFromRemoteWithID:(id)a0 responseCode:(long long *)a1;
- (char)isServerReachable;
- (id)mailboxProxyForMailbox:(id)a0;
- (char)moveFolderOnRemote:(id)a0 toParent:(id)a1 responseCode:(long long *)a2;
- (char)moveNoteOnRemote:(id)a0 toFolder:(id)a1 responseCode:(long long *)a2;
- (void)recreateExchangeServiceBinding;
- (char)responseCodeIsFatal:(long long)a0;
- (char)updateFolderOnRemote:(id)a0 responseCode:(long long *)a1;
- (char)updateNoteOnRemote:(id)a0 responseCode:(long long *)a1;

@end
