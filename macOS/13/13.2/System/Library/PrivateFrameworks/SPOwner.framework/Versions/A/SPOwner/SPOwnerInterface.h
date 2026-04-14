@interface SPOwnerInterface : NSObject

+ (id)cbPeripheralManagementSession;

- (id)settingsConfiguration;
- (id)ownerSession;
- (id)privateOwnerSession;
- (id)persistentConnectionSession;
- (id)privateFirmwareUpdateSession;
- (id)firmwareUpdateSession;
- (id)tagSeparationSession;
- (id)separationMonitoringSession;
- (id)trackingAvoidanceService;
- (id)fmipRegisterInfo;
- (id)maintenanceConnectionSession;

@end
