@class CUTDeferredTaskQueue, IDSCurrentServerTimePair;
@protocol IDSCurrentServerTimeProvider;

@interface IDSCurrentServerTime : NSObject

@property (retain, nonatomic) id<IDSCurrentServerTimeProvider> serverTimeProvider;
@property (retain) IDSCurrentServerTimePair *timePair;
@property (readonly, nonatomic) CUTDeferredTaskQueue *refreshServerTimeTask;

+ (id)sharedInstance;

- (void)_storeInitialServerTimeIfNeeded;
- (void)_storeCurrentTime;
- (void)_refreshServerTime;
- (double)_refreshTimeInterval;
- (double)currentServerTimeInterval;
- (id)currentServerTimeDate;
- (id)initWithServerTimeProvider:(id)a0;
- (void).cxx_destruct;

@end
