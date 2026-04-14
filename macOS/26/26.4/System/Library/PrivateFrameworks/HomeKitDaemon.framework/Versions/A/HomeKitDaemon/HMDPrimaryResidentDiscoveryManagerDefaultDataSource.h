@class NSNotificationCenter, NSString;
@protocol HMMLogEventSubmitting;

@interface HMDPrimaryResidentDiscoveryManagerDefaultDataSource : NSObject <HMDPrimaryResidentDiscoveryManagerDataSource>

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)remoteDeviceMonitorFromContext:(id)a0;
- (id)createBackoffTimer;
- (id)createPrimaryResidentDiscoveryOperationWithContext:(id)a0;
- (id)transportStartFutureFromContext:(id)a0;

@end
