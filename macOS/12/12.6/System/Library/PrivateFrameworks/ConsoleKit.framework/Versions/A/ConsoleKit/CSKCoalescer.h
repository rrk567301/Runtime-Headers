@class NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, CSKCoalescerDelegate;

@interface CSKCoalescer : NSObject

@property (nonatomic) int emptyBatchesLimit;
@property (nonatomic) int consecutiveEmptyBatches;
@property BOOL isRunning;
@property (nonatomic) BOOL needsManualResume;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolatedSerialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventsSerialQueue;
@property (retain, nonatomic) NSMutableArray *itemsBuffer;
@property (readonly, nonatomic) double batchInterval;
@property (readonly, nonatomic) float batchIntervalLeeway;
@property (readonly, nonatomic) unsigned long long batchItemsLimit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *batchQueue;
@property (weak, nonatomic) id batchTarget;
@property (copy, nonatomic) id /* block */ batchHandler;
@property (weak, nonatomic) id<CSKCoalescerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)cancel;
- (void)addItems:(id)a0;
- (id)initWithBatchInterval:(double)a0 batchItemsLimit:(unsigned long long)a1;
- (void)addItems:(id)a0 direction:(unsigned long long)a1;
- (BOOL)_autoResumeEventsIfNeeded;
- (BOOL)_resumeEvents;
- (BOOL)_pauseEvents;
- (id)_newTimer;
- (id /* block */)_timerInvocationHandler;
- (void)_fireBatchEvent;
- (BOOL)_autoPauseEventsIfNeeded;

@end
