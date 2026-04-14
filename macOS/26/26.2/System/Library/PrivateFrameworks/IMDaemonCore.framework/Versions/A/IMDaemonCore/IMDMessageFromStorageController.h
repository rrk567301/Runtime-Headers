@class IMDMessageStore, NSString, NSTimer, NSMutableSet, NSMutableDictionary, IMEnhancedStorageMetrics, IMTimingCollection;

@interface IMDMessageFromStorageController : NSObject

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSTimer *storageTimer;
@property (retain, nonatomic) NSMutableSet *messagesReceivedDuringStorage;
@property (retain, nonatomic) IMTimingCollection *timingComingBackFromStorage;
@property (nonatomic) unsigned long long messagesProcessedComingBackFromStorage;
@property (retain, nonatomic) id _broadcasterForTesting;
@property (nonatomic) double storageTimerInterval;
@property (nonatomic) double lastMessageStorageTimerInterval;
@property (readonly, nonatomic) NSMutableDictionary *trackingContexts;
@property (readonly, nonatomic) NSMutableDictionary *hasSeenLastBatchByAccountID;
@property (nonatomic) unsigned long long pendingReadReceiptFromStorageCount;
@property (retain, nonatomic) IMDMessageStore *messageStore;
@property (retain, nonatomic) NSMutableSet *myV1ReadReceiptsReceivedDuringStorageNoQOI;
@property (retain, nonatomic) NSMutableSet *myV1ReadReceiptsReceivedDuringStorageWithQOI;
@property (retain, nonatomic) IMEnhancedStorageMetrics *enhancedStorageMetrics;
@property (nonatomic) BOOL haveSeenReceiptsWithQOIThisBatchSet;

+ (id)SMSStorageController;
+ (id)_missingMessageReadReceiptCache;
+ (BOOL)anyStorageControllerIsAwaitingStorageTimer;
+ (id)iMessageStorageController;

- (void)noteItemFromStorage:(id)a0 isLast:(BOOL)a1;
- (void)_resetLastBatchFromStorageForAccountID:(id)a0;
- (void)decrementPendingReadReceiptFromStorageCount;
- (BOOL)isMessageReadWithMessageDate:(id)a0 inChatGUID:(id)a1;
- (BOOL)isOnLastBatchFromStorageForAccountID:(id)a0;
- (id)broadcaster;
- (void)noteBatchMessage:(id)a0 fromAccount:(id)a1 usingService:(id)a2;
- (void)kickoffStorageTimerIfNeeded;
- (void)noteStorageCycleCompleteForAccountID:(id)a0;
- (BOOL)popReadReceiptForMissingGUID:(id)a0;
- (void)collectReadReceiptMetrics;
- (void)resetReadReceiptTracker;
- (void)noteItemFromStorage:(id)a0 isLast:(BOOL)a1 extendsStorageTimer:(BOOL)a2;
- (void)saveReadReceiptStateToDatabase;
- (void)sendDeliveryReceiptForReadReceiptIfPending:(id)a0;
- (void)_noteLastItemProcessedWithError:(unsigned long long)a0;
- (id)initWithMessageStore:(id)a0;
- (void)addMissingMessageReadReceipt:(id)a0;
- (void)_postMessagesFromStorage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAwaitingStorageTimer;
- (void)_submitStorageMetricsWithError:(unsigned long long)a0;
- (void)noteLastBatchFromStorageForAccountID:(id)a0;
- (void)_resetMetricsForBatchSet;
- (void)noteItemProcessed:(BOOL)a0 batchContext:(id)a1;
- (void)noteBatchSetCompleteForAccountID:(id)a0;
- (void)_updateStorageTimerWithInterval:(double)a0;
- (void)trackReadReceipt:(id)a0 targetChatGUID:(id)a1 didFindMessage:(BOOL)a2 didMarkMessage:(BOOL)a3;
- (void)incrementPendingReadReceiptFromStorageCount;
- (void)_storageTimerFired;
- (void)_resetMetrics;

@end
