@class CUTDeferredTaskQueue, IDSCurrentServerTimePair;
@protocol IDSCurrentServerTimeProvider;

@interface IDSCurrentServerTime : NSObject

@property (retain, nonatomic) id<IDSCurrentServerTimeProvider> serverTimeProvider;
@property (retain) IDSCurrentServerTimePair *timePair;
@property (readonly, nonatomic) CUTDeferredTaskQueue *refreshServerTimeTask;

+ (id)sharedInstance;

- (void)_storeInitialServerTimeIfNeeded;
- (id)currentServerTimeDate;
- (double)currentServerTimeInterval;
- (double)_refreshTimeInterval;
- (void).cxx_destruct;
- (id)initWithServerTimeProvider:(id)a0;
- (void)_refreshServerTime;
- (void)_storeCurrentTime;

@end
