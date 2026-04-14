@class NSString, _TPSXPCConnection, TPSAnalyticsDataProvider, NSObject;
@protocol OS_dispatch_queue;

@interface TPSAnalyticsEventController : NSObject <_TPSXPCExportable>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue;
@property (retain, nonatomic) _TPSXPCConnection *xpcConnection;
@property (weak, nonatomic) TPSAnalyticsDataProvider *dataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)logAnalyticsEvent:(id)a0;
- (void)logAnalyticsEventFromTipsd:(id)a0;
- (void)logAnalyticsEventsFromTipsd:(id)a0;
- (void)logAnalyticsEvents:(id)a0;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)_destroyXPCConnection;
- (void)sendToCoreAnalytics:(id)a0 eventName:(id)a1;

@end
