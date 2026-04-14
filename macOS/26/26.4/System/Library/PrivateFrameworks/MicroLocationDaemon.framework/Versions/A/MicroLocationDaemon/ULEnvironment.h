@class ULSpatialSceneClassification, ULDisplayMonitor_OSX, ULRapportMonitor, ULBatteryModeMonitor, ULSleepWakeMonitor, ULPeripheralOdometryMonitor, ULDataProtectionMonitor, ULAltitudeMonitor, ULPhotoProvider, ULBluetoothMonitor, ULDisplayMonitor, ULBGSystemTaskManager, NSObject, ULLearnedFeatures, ULAirplaneModeMonitor, ULDarwinNotificationHelper, ULPrivacyMonitor, ULDiagnostics, ULOdometryMonitor, ULInternalNotifyMonitor, ULBuddyMonitor, _TtC19MicroLocationDaemon34ULBiomeEventStreamCarPlayConnected, _TtC19MicroLocationDaemon34ULBiomeEventStreamLocationSemantic;
@protocol OS_dispatch_queue;

@interface ULEnvironment : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) ULDataProtectionMonitor *dataProtectionMonitor;
@property (retain, nonatomic) ULAirplaneModeMonitor *airplaneModeMonitor;
@property (retain, nonatomic) ULBatteryModeMonitor *batteryModeMonitor;
@property (retain, nonatomic) ULBluetoothMonitor *bluetoothMonitor;
@property (retain, nonatomic) ULRapportMonitor *rapportMonitor;
@property (retain, nonatomic) ULDisplayMonitor *displayMonitor;
@property (retain, nonatomic) ULDisplayMonitor_OSX *displayMonitor_OSX;
@property (retain, nonatomic) ULInternalNotifyMonitor *internalNotifyMonitor;
@property (retain, nonatomic) ULBGSystemTaskManager *backgroundSystemTaskManager;
@property (retain, nonatomic) ULDiagnostics *diagnostics;
@property (retain, nonatomic) ULPrivacyMonitor *privacyMonitor;
@property (retain, nonatomic) ULBuddyMonitor *buddyMonitor;
@property (retain, nonatomic) ULOdometryMonitor *odometryMonitor;
@property (retain, nonatomic) ULPeripheralOdometryMonitor *peripheralOdometryMonitor;
@property (retain, nonatomic) ULAltitudeMonitor *altitudeMonitor;
@property (retain, nonatomic) _TtC19MicroLocationDaemon34ULBiomeEventStreamCarPlayConnected *biomeEventStreamCarPlayConnected;
@property (retain, nonatomic) _TtC19MicroLocationDaemon34ULBiomeEventStreamLocationSemantic *biomeEventStreamLocationSemantic;
@property (retain, nonatomic) ULSleepWakeMonitor *sleepWakeMonitor;
@property (retain, nonatomic) ULDarwinNotificationHelper *notificationHelper;
@property (retain, nonatomic) ULPhotoProvider *experiments_photoProvider;
@property (retain, nonatomic) ULSpatialSceneClassification *experiments_spatialSceneClassification;
@property (retain, nonatomic) ULLearnedFeatures *experiments_learnedFeatures;

+ (id)standardEnvironment;

- (void).cxx_destruct;
- (id)init;

@end
