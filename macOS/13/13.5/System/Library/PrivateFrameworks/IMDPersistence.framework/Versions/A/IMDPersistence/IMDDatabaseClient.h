@class NSString;

@interface IMDDatabaseClient : IMDDatabaseLegacyXPCBridge <IMDRemoteDatabaseProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchLastMessageRecordForChatRecordWithRowID:(long long)a0 completionHandler:(id /* block */)a1;
- (void)moveMessageRecordsToRecoveryForChatRecordsWithGUIDs:(id)a0 deleteDate:(id)a1;
- (id)chatRecordsFilteredByPredicate:(id)a0;
- (void)_sendAsyncXPCMessage:(id)a0 action:(long long)a1 responseHandler:(id /* block */)a2;
- (void)_sendSyncXPCMessage:(id)a0 action:(long long)a1 responseHandler:(id /* block */)a2;
- (id)chatRecordsWithHandles:(id)a0 serviceName:(id)a1 displayName:(id)a2 groupID:(id)a3 style:(unsigned char)a4;
- (id)chatRecordsWithIdentifier:(id)a0;
- (void)clearRecoverableMessageTombStones;
- (void)coreSpotlightDeleteAttachmentGUIDs:(id)a0;
- (void)deleteAttachmentsDirectWithPredicate:(id)a0;
- (void)deleteJunkMessagesOlderThanDays:(long long)a0;
- (void)deleteRecoverableMessagesOlderThanDays:(long long)a0;
- (void)fetchAttachmentRecordsFilteredUsingPredicate:(id)a0 limit:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)fetchChatRecordsFilteredUsingPredicate:(id)a0 sortedUsingDescriptors:(id)a1 limit:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)fetchChatRecordsFilteredUsingPredicate:(id)a0 sortedUsingLastMessageDateAscending:(BOOL)a1 limit:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)fetchChatRecordsFilteredUsingPredicate:(id)a0 sortedUsingLastMessageDateAscending:(BOOL)a1 olderThan:(id)a2 limit:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)fetchChatRecordsWithAtLeastHandles:(id)a0 serviceName:(id)a1 style:(unsigned char)a2 completionHandler:(id /* block */)a3;
- (void)fetchChatRecordsWithPinningIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDataForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchGroupPhotoPathsForChatsWithGroupIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchInteger64ForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchMessageRecordWithGUID:(id)a0 excludeRecoverableMessages:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)fetchMessageRecordsForChatRecordWithGUID:(id)a0 filteredUsingPredicate:(id)a1 sortedUsingDescriptors:(id)a2 limit:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)loadRecoverableMessagesMetadataGroupedByChatGUID;
- (void)moveMessageRecordsToRecoveryForMessageGUIDs:(id)a0 deleteDate:(id)a1;
- (void)permanentlyDeleteRecoverableMessagesInChatsWithGUIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)postSharePlayNotificationForChatGUID:(id)a0 faceTimeConversationUUID:(id)a1 handleIdentifier:(id)a2 localizedApplicationName:(id)a3;
- (void)recoverMessageRecordsForChatRecordsWithGUIDs:(id)a0;
- (id)recoverableMessagesMetadataPendingCloudKitDeleteWithLimit:(long long)a0;
- (id)recoverableMessagesMetadataPendingCloudKitSaveWithLimit:(long long)a0;
- (void)resolveInconsistentGUIDForChatRecordWithGUID:(id)a0 newGUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)storeData:(id)a0 forKey:(id)a1;
- (void)storeRecoverableMessagePartWithBody:(id)a0 forMessageWithGUID:(id)a1 deleteDate:(id)a2;
- (void)updateAttachmentSyndicationRanges:(id)a0 shouldHideFromSyndication:(BOOL)a1;
- (void)updateMessageSyndicationRanges:(id)a0 shouldHideFromSyndication:(BOOL)a1;
- (void)updateRecoverableMessageSyncState:(long long)a0 forMessageRowID:(long long)a1 onPartIndex:(long long)a2;

@end
