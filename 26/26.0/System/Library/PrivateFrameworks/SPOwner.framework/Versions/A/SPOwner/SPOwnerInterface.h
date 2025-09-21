@interface SPOwnerInterface : NSObject

+ (id)cbPeripheralManagementSession;

- (id)tagSeparationSession;
- (id)privateOwnerSession;
- (id)firmwareUpdateSession;
- (id)ownerSession;
- (id)repairInterface;
- (id)separationMonitoringSession;
- (id)trackingAvoidanceService;
- (id)maintenanceConnectionSession;
- (id)beaconSharingSession;
- (id)beaconSharingSessionWithToolingSupport;
- (id)privateFirmwareUpdateSession;
- (id)certificationAssistantSession;
- (id)persistentConnectionSession;
- (id)settingsConfiguration;
- (id)fmipRegisterInfo;

@end
