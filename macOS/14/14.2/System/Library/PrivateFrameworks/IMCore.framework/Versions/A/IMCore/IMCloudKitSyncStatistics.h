@class NSString;

@interface IMCloudKitSyncStatistics : NSObject {
    void /* unknown type, empty encoding */ statistics;
}

@property (nonatomic, readonly) long long syncedChatCount;
@property (nonatomic, readonly) long long totalChatCount;
@property (nonatomic, readonly) long long serverChatTotalCount;
@property (nonatomic, readonly) long long serverChatLiveCount;
@property (nonatomic, readonly) long long syncStoreWritableChatCount;
@property (nonatomic, readonly) long long syncStoreWrittenChatCount;
@property (nonatomic, readonly) long long syncedMessageCount;
@property (nonatomic, readonly) long long totalMessageCount;
@property (nonatomic, readonly) long long serverMessageTotalCount;
@property (nonatomic, readonly) long long serverMessageLiveCount;
@property (nonatomic, readonly) long long syncStoreWritableMessageCount;
@property (nonatomic, readonly) long long syncStoreWrittenMessageCount;
@property (nonatomic, readonly) long long syncedAttachmentCount;
@property (nonatomic, readonly) long long totalAttachmentCount;
@property (nonatomic, readonly) long long serverAttachmentTotalCount;
@property (nonatomic, readonly) long long serverAttachmentLiveCount;
@property (nonatomic, readonly) long long syncStoreWritableAttachmentCount;
@property (nonatomic, readonly) long long syncStoreWrittenAttachmentCount;
@property (nonatomic, readonly) long long serverMessageUpdateTotalCount;
@property (nonatomic, readonly) long long serverMessageUpdateLiveCount;
@property (nonatomic, readonly) long long syncStoreWritableMessageUpdateCount;
@property (nonatomic, readonly) long long syncStoreWrittenMessageUpdateCount;
@property (nonatomic, readonly) long long serverRecoverableMessageTotalCount;
@property (nonatomic, readonly) long long serverRecoverableMessageLiveCount;
@property (nonatomic, readonly) long long syncStoreWritableRecoverableMessageCount;
@property (nonatomic, readonly) long long syncStoreWrittenRecoverableMessageCount;
@property (nonatomic, readonly) long long syncedRecordCount;
@property (nonatomic, readonly) long long totalRecordCount;
@property (nonatomic, readonly) double percentSynced;
@property (nonatomic, readonly) long long remainingMessagesCount;
@property (nonatomic, readonly) NSString *description;

+ (id)_createSyncStatisticsDictionary:(long long)a0 messageSyncCount:(long long)a1 chatCount:(long long)a2 chatSyncCount:(long long)a3 attachmentCount:(long long)a4 attachmentSyncCount:(long long)a5 serverRecordCounts:(id)a6 syncStoreCounts:(id)a7;
+ (id)_createSyncStatisticsDictionaryForSyncControllerSyncState:(unsigned long long)a0 syncType:(long long)a1 count:(double)a2 max:(double)a3;
+ (double)calculatePercentageOfTotal:(double)a0 count:(double)a1;
+ (id)percentStringFromDouble:(double)a0;
+ (id)percentStringFromTotal:(double)a0 count:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_syncStatisticsDictionary;
- (id)initWithStatisticsDictionary:(id)a0;

@end
