@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKRampManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) NSTimer *retryTimer;

+ (id)sharedInstance;

- (id)init;
- (id)_CKUtilitiesSharedInstance;
- (void)cachedRampState:(id /* block */)a0;
- (id)_rampUpRecordID;
- (void)_scheduleOperation:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_fetchLatestRampStateFromCK:(id /* block */)a0;
- (void)_writeRampStatePromoted:(BOOL)a0 hadServerError:(BOOL)a1;
- (void)fetchLatestRampStateFromCK:(id /* block */)a0;
- (void)_persistRampFetchServerError:(BOOL)a0;
- (void)_performRampCheckWithRetryAfter:(double)a0 recordFetchedCompletionBlock:(id /* block */)a1;

@end
