@class CUTDeferredTaskQueue, IDSCurrentServerTimePair;
@protocol IDSCurrentServerTimeProvider;

@interface IDSCurrentServerTime : NSObject

@property (retain, nonatomic) id<IDSCurrentServerTimeProvider> serverTimeProvider;
@property (retain) IDSCurrentServerTimePair *timePair;
@property (readonly, nonatomic) CUTDeferredTaskQueue *refreshServerTimeTask;

+ (id)sharedInstance;

- (void)_storeCurrentTime;
- (double)_refreshTimeInterval;
- (double)currentServerTimeInterval;
- (id)initWithServerTimeProvider:(id)a0;
- (void).cxx_destruct;
- (void)_refreshServerTime;
- (id)currentServerTimeDate;
- (void)_storeInitialServerTimeIfNeeded;

@end
