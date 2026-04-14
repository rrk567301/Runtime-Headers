@class CUTDeferredTaskQueue, IDSCurrentServerTimePair;
@protocol IDSCurrentServerTimeProvider;

@interface IDSCurrentServerTime : NSObject

@property (retain, nonatomic) id<IDSCurrentServerTimeProvider> serverTimeProvider;
@property (retain) IDSCurrentServerTimePair *timePair;
@property (readonly, nonatomic) CUTDeferredTaskQueue *refreshServerTimeTask;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithServerTimeProvider:(id)a0;
- (double)currentServerTimeInterval;
- (id)currentServerTimeDate;
- (double)_refreshTimeInterval;
- (void)_storeInitialServerTimeIfNeeded;
- (void)_refreshServerTime;
- (void)_storeCurrentTime;

@end
