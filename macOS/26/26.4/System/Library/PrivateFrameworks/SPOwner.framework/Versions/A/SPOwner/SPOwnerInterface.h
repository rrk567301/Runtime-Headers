@interface SPOwnerInterface : NSObject

+ (id)cbPeripheralManagementSession;

- (id)settingsConfiguration;
- (id)ownerSession;
- (id)maintenanceConnectionSession;
- (id)fmipRegisterInfo;
- (id)certificationAssistantSession;
- (id)beaconSharingSession;
- (id)privateOwnerSession;
- (id)separationMonitoringSession;
- (id)beaconSharingSessionWithToolingSupport;
- (id)firmwareUpdateSession;
- (id)trackingAvoidanceService;
- (id)persistentConnectionSession;
- (id)tagSeparationSession;
- (id)repairInterface;
- (id)privateFirmwareUpdateSession;

@end
