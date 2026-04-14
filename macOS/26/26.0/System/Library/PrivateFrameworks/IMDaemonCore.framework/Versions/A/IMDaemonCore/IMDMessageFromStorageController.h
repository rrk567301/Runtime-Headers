@class IMDMessageStore, NSString, NSTimer, NSMutableSet, NSMutableDictionary, IMTimingCollection;

@interface IMDMessageFromStorageController : NSObject

@property (retain, nonatomic) IMDMessageStore *messageStore;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSTimer *storageTimer;
@property (retain, nonatomic) NSMutableSet *messagesReceivedDuringStorage;
@property (retain, nonatomic) IMTimingCollection *timingComingBackFromStorage;
@property (nonatomic) unsigned long long messagesProcessedComingBackFromStorage;
@property (retain, nonatomic) id _broadcasterForTesting;
@property (nonatomic) double storageTimerInterval;
@property (nonatomic) double lastMessageStorageTimerInterval;
@property (readonly, nonatomic) NSMutableDictionary *trackingContexts;
@property (nonatomic) unsigned long long pendingReadReceiptFromStorageCount;

+ (id)SMSStorageController;
+ (BOOL)anyStorageControllerIsAwaitingStorageTimer;
+ (id)iMessageStorageController;

- (void)noteItemFromStorage:(id)a0;
- (void)_postMessagesFromStorage:(id)a0;
- (void)decrementPendingReadReceiptFromStorageCount;
- (void)noteLastItemProcessed;
- (void)_submitStorageMetricsWithError:(unsigned long long)a0;
- (void)noteSuppressedMessageUpdate:(id)a0;
- (void)_storageTimerFired;
- (BOOL)isAwaitingStorageTimer;
- (void)noteBatchMessage:(id)a0 fromAccount:(id)a1 usingService:(id)a2;
- (void)noteItemProcessed:(BOOL)a0 batchContext:(id)a1 usingService:(id)a2;
- (void)noteLastItemFromStorage:(id)a0;
- (id)initWithMessageStore:(id)a0;
- (void)incrementPendingReadReceiptFromStorageCount;
- (void).cxx_destruct;
- (void)noteItemFromStorage:(id)a0 extendsStorageTimer:(BOOL)a1;
- (id)broadcaster;
- (void)_updateStorageTimerWithInterval:(double)a0;
- (void)noteLastItemProcessedWithError:(unsigned long long)a0;

@end
