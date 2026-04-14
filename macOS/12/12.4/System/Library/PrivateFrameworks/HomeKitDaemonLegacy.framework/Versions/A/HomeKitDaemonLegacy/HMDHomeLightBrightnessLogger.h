@class HMDHome, NSString, NSNotificationCenter, BMStreamDatastorePruner, NSArray, BMStoreStream, NSObject, BMSource, NSMapTable;
@protocol OS_dispatch_queue, HMMLogEventSubmitting;

@interface HMDHomeLightBrightnessLogger : HMFObject <HMFLogging, HMDDevicePreferenceDataSource, HMMLogEventObserver, HMDLogEventDailyProvider>

@property (readonly, weak) HMDHome *home;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSMapTable *notificationEnabledCharacteristicsByAccessory;
@property (getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly) NSString *clientIdentifier;
@property (readonly) BMStreamDatastorePruner *pruner;
@property (nonatomic) unsigned long long eventOrder;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) BMSource *source;
@property (readonly) BMStoreStream *stream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;

+ (id)logCategory;
+ (id)handleDifferentType:(id)a0;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (id)initWithHome:(id)a0 logEventSubmitter:(id)a1 workQueue:(id)a2;
- (void)configureLogger;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (void)handleAccessoryRemovedNotification:(id)a0;
- (void)handleAccessoryAdded:(id)a0;
- (void)handleCharacteristicsValueUpdated:(id)a0;
- (void)handleCurrentDevicePrimaryResidentChangedWithReason:(id)a0;
- (void)processCharacteristicsAndSubmitCoreAnalyticsEvents:(id)a0 withLogMessage:(id)a1;
- (id)generateTimeStampUpToSecond;
- (id)generateTimeStampUpToMinute;
- (id)brightnessSensorsValue;
- (void)submitCoreAnalyticsEventForBrightness:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 homeUUID:(id)a3 eventOrder:(long long)a4 homePresence:(BOOL)a5 luxLevel:(id)a6;
- (void)submitCoreAnalyticsEventForGarageDoorOpener:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 homeUUID:(id)a3 homePresence:(BOOL)a4;
- (void)submitCoreAnalyticsEventForLocks:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 homeUUID:(id)a3 homePresence:(BOOL)a4;
- (void)submitCoreAnalyticsEventForMotionSensor:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 homeUUID:(id)a3 homePresence:(BOOL)a4;
- (void)submitCoreAnalyticsEventForDoors:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 homeUUID:(id)a3 homePresence:(BOOL)a4;
- (void)handleCharacteristicWriteLogEvent:(id)a0;
- (void)readFromBiomeDatabase;

@end
