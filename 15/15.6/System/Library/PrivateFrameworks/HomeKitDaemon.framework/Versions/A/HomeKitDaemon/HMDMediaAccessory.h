@class NSString, NSDictionary, NSNotificationCenter, HMDMediaAccessoryAdvertisement, HMDMediaProfile;

@interface HMDMediaAccessory : HMDAccessory <HMFLogging>

@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSDictionary *assistantObject;
@property (retain) NSNotificationCenter *notificationCenter;
@property (readonly, copy) HMDMediaAccessoryAdvertisement *advertisement;
@property (readonly) HMDMediaProfile *mediaProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;

- (id)init;
- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAdvertisement:(id)a0;
- (id)dumpState;
- (long long)reachableTransports;
- (id)dumpSimpleState;
- (id)_createMediaProfile;
- (void)_registerForMessages;
- (char)_shouldFilterAccessoryProfileForUnentitledClients:(id)a0;
- (void)addAdvertisement:(id)a0;
- (void)addHostedAccessory:(id)a0;
- (void)handleRoomChanged:(id)a0;
- (void)handleRoomNameChanged:(id)a0;
- (void)handleUpdatedAdvertisement:(id)a0;
- (void)handleUpdatedMinimumUserPrivilege:(long long)a0;
- (void)handleUpdatedPassword:(id)a0;
- (id)initWithTransaction:(id)a0 home:(id)a1;
- (void)notifyConnectivityChangedWithReachabilityState:(char)a0;
- (char)providesHashRouteID;
- (void)removeAdvertisement:(id)a0;
- (void)removeHostedAccessory:(id)a0;
- (void)setRemotelyReachable:(char)a0;
- (unsigned long long)supportedTransports;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)transactionWithObjectChangeType:(unsigned long long)a0;
- (id)transportReports;

@end
