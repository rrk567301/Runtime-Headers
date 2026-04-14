@class CUTDeferredTaskQueue, IDSCurrentServerTimePair;
@protocol IDSCurrentServerTimeProvider;

@interface IDSCurrentServerTime : NSObject

@property (retain, nonatomic) id<IDSCurrentServerTimeProvider> serverTimeProvider;
@property (retain) IDSCurrentServerTimePair *timePair;
@property (readonly, nonatomic) CUTDeferredTaskQueue *refreshServerTimeTask;

+ (id)sharedInstance;

- (void)_refreshServerTime;
- (double)currentServerTimeInterval;
- (void)_storeInitialServerTimeIfNeeded;
- (void).cxx_destruct;
- (id)currentServerTimeDate;
- (void)_storeCurrentTime;
- (id)initWithServerTimeProvider:(id)a0;
- (double)_refreshTimeInterval;

@end
