@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKRampManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) NSTimer *retryTimer;

+ (id)sharedInstance;

- (void)_writeRampStatePromoted:(BOOL)a0 hadServerError:(BOOL)a1;
- (id)_rampUpRecordID;
- (void)_scheduleOperation:(id)a0;
- (void).cxx_destruct;
- (void)_persistRampFetchServerError:(BOOL)a0;
- (void)cachedRampState:(id /* block */)a0;
- (id)_CKUtilitiesSharedInstance;
- (void)_fetchLatestRampStateFromCK:(id /* block */)a0;
- (void)fetchLatestRampStateFromCK:(id /* block */)a0;
- (id)init;
- (void)_performRampCheckWithRetryAfter:(double)a0 recordFetchedCompletionBlock:(id /* block */)a1;
- (void)dealloc;

@end
