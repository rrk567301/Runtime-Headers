@class ULBGSystemTaskManager, ULDarwinNotificationHelper, _TtC19MicroLocationDaemon34ULBiomeEventStreamCarPlayConnected, ULBluetoothMonitor, NSObject, ULDataProtectionMonitor, ULBatteryModeMonitor, ULAirplaneModeMonitor, ULSleepWakeMonitor, ULRapportMonitor, ULBuddyMonitor, ULPrivacyMonitor, ULDiagnostics, _TtC19MicroLocationDaemon34ULBiomeEventStreamLocationSemantic, ULDisplayMonitor, ULInternalNotifyMonitor, ULDisplayMonitor_OSX;
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
@property (retain, nonatomic) _TtC19MicroLocationDaemon34ULBiomeEventStreamCarPlayConnected *biomeEventStreamCarPlayConnected;
@property (retain, nonatomic) _TtC19MicroLocationDaemon34ULBiomeEventStreamLocationSemantic *biomeEventStreamLocationSemantic;
@property (retain, nonatomic) ULSleepWakeMonitor *sleepWakeMonitor;
@property (retain, nonatomic) ULDarwinNotificationHelper *notificationHelper;

+ (id)standardEnvironment;

- (id)init;
- (void).cxx_destruct;

@end
