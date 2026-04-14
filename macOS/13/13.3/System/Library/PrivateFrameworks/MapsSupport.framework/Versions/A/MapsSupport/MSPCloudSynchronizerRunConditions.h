@class NSDate, GEONetworkObserver, NSObject;
@protocol OS_dispatch_queue, MSPCloudSynchronizerRunConditionsDelegate;

@interface MSPCloudSynchronizerRunConditions : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSDate *lastErrorDate;
@property (nonatomic) double lastRetryDelayInSeconds;
@property (retain, nonatomic) GEONetworkObserver *networkObserver;
@property (nonatomic) BOOL hasiCloudAccount;
@property (nonatomic) BOOL isNetworkReachable;
@property (nonatomic) BOOL isDeviceToDeviceEncryptionReady;
@property (weak, nonatomic) id<MSPCloudSynchronizerRunConditionsDelegate> delegate;
@property (readonly, nonatomic) BOOL shouldRun;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)accountChanged:(id)a0;
- (void)announceRunConditionsChanged;
- (double)currentRetryDelay;
- (double)delayRetryingAfterError:(id)a0;
- (void)networkConditionsChanged;
- (void)refreshAccountStatus;
- (BOOL)shouldRetryAfterError:(id)a0;
- (void)subscribeToAccountChangeNotifications;
- (void)subscribeToNetworkChangeNotifications;

@end
