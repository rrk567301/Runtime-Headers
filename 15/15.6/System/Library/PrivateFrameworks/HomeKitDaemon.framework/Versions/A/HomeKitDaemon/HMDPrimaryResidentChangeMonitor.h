@class NSNotificationCenter, NSUUID, NSString;
@protocol HMDPrimaryResidentChangeMonitorDataSource;

@interface HMDPrimaryResidentChangeMonitor : HMFObject <HMFLogging>

@property (readonly) NSNotificationCenter *notificationCenter;
@property char isCurrentDevicePrimaryResident;
@property char hasResidentDevices;
@property (copy) NSUUID *confirmedPrimaryResidentDeviceIdentifier;
@property (weak) id<HMDPrimaryResidentChangeMonitorDataSource> dataSource;
@property (readonly) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)configureWithHome:(id)a0;
- (id)confirmedPrimaryResidentDevice;
- (char)dataSourceHasResidentDevices;
- (void)handlePrimaryResidentChangedNotification:(id)a0;
- (id)initWithIdentifier:(id)a0 notificationCenter:(id)a1;
- (void)notifyChangeToConfirmedPrimaryResidentDeviceIdentifier;
- (void)notifyChangeToHasResidentDevices;
- (void)notifyChangeToIsCurrentPrimaryResident;
- (void)refreshConfirmedPrimaryResidentDeviceIdentifierWithDevice:(id)a0;
- (void)refreshCurrentDevicePrimaryResidentWithDevice:(id)a0;
- (void)refreshHasResidentDevices;
- (void)refreshMonitor;
- (void)registerForNotificationsWithHome:(id)a0;

@end
