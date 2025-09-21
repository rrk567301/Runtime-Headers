@class NSString, MFEWSAccount, NSMutableSet, NSLock;

@interface MFEWSStore : MFRemoteStore <MFEWSErrorHandler> {
    NSString *_syncState;
    NSLock *_syncLock;
    NSMutableSet *_flagsToSetDuringSync;
}

@property (copy) NSString *folderIdString;
@property (copy) NSString *syncState;
@property (readonly, nonatomic) MFEWSAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)lastSyncDate;
- (char)allowsOverwrite;
- (void)_setSyncState:(id)a0 persistToLibrary:(char)a1;
- (void)handleEWSError:(id)a0;
- (id)_fetchBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 fetchIfNotAvailable:(char)a2 allowPartial:(char)a3;
- (void)_fetchChangesFromServer;
- (id)_fetchHeaderDataForMessage:(id)a0 fetchIfNotAvailable:(char)a1 allowPartial:(char)a2;
- (id)_gateway;
- (char)_loadFolderId;
- (char)allowsDeleteInPlace;
- (char)canRebuild;
- (void)deleteMessageWithEWSItemIdString:(id)a0;
- (void)fetchSynchronously;
- (void)forceResync;
- (id)initWithCriterion:(id)a0 mailbox:(id)a1 readOnly:(char)a2;
- (void)openSynchronouslyIfWaitingToOpen;
- (void)openSynchronouslyUpdatingMetadata:(char)a0;
- (void)sendResponseType:(char)a0 forMeetingMessage:(id)a1 completionHandler:(id /* block */)a2;
- (void)undeleteMessagesWithEWSItemIdStrings:(id)a0;
- (id)updateWithSyncState:(id)a0 newMessages:(id)a1 updatedMessages:(id)a2 updatedLibraryIdStrings:(id)a3 deletedMessages:(id)a4 flagsByMessages:(id)a5 isFinalBatch:(char)a6;

@end
