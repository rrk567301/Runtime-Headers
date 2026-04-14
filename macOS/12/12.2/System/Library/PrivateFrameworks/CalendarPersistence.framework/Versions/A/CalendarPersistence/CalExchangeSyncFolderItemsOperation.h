@class EWSFolderIdType, NSString;

@interface CalExchangeSyncFolderItemsOperation : CalExchangeOperation <CalMessageTraceableOpearation> {
    EWSFolderIdType *_folderId;
    NSString *_messageTracerUID;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithSession:(id)a0 folderId:(id)a1;
- (id)debugTitle;
- (id)initWithSession:(id)a0 folderId:(id)a1 messageTracerUID:(id)a2;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)folderId;
- (void)_retrieveUpdatedCreatedAndDeletedIDsFromChanges:(id)a0 inCalendar:(id)a1 createdOrUpdatedItemIds:(id)a2 deletedItemIds:(id)a3;
- (id)messageTracerName;
- (id)messageTracerUUID;

@end
