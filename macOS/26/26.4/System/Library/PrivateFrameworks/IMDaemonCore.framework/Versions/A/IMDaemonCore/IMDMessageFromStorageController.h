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
@property (nonatomic) unsigned long long numActiveMadridAccounts;
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

- (void)saveReadReceiptStateToDatabase;
- (id)initWithMessageStore:(id)a0;
- (BOOL)isMessageReadWithMessageDate:(id)a0 inChatGUID:(id)a1;
- (void)noteItemFromStorage:(id)a0 isLast:(BOOL)a1 extendsStorageTimer:(BOOL)a2;
- (void)noteLastBatchFromStorageForAccountID:(id)a0;
- (void)noteStorageCycleCompleteForAccountID:(id)a0;
- (void)resetReadReceiptTracker;
- (void)decrementPendingReadReceiptFromStorageCount;
- (void)incrementPendingReadReceiptFromStorageCount;
- (void)_noteLastItemProcessedWithError:(unsigned long long)a0;
- (BOOL)popReadReceiptForMissingGUID:(id)a0;
- (void)_postMessagesFromStorage:(id)a0;
- (BOOL)checkTrackingContextsForCompletion;
- (void)_submitStorageMetricsWithError:(unsigned long long)a0;
- (void)_storageTimerFired;
- (void)noteBatchMessage:(id)a0 fromAccount:(id)a1 usingService:(id)a2;
- (void)collectReadReceiptMetrics;
- (void).cxx_destruct;
- (void)sendDeliveryReceiptForReadReceiptIfPending:(id)a0;
- (void)noteBatchSetCompleteForAccountID:(id)a0;
- (BOOL)isOnLastBatchFromStorageForAccountID:(id)a0;
- (void)trackReadReceipt:(id)a0 targetChatGUID:(id)a1 didFindMessage:(BOOL)a2 didMarkMessage:(BOOL)a3;
- (void)kickoffStorageTimerIfNeeded;
- (void)_resetMetrics;
- (void)_resetMetricsForBatchSet;
- (void)noteItemProcessed:(BOOL)a0 batchContext:(id)a1;
- (BOOL)isAwaitingStorageTimer;
- (id)broadcaster;
- (void)_updateStorageTimerWithInterval:(double)a0;
- (void)refreshNumActiveMadridAccounts;
- (void)_resetLastBatchFromStorage;
- (void)addMissingMessageReadReceipt:(id)a0;
- (void)noteItemFromStorage:(id)a0 isLast:(BOOL)a1;

@end
