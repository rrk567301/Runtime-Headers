@interface SPOwnerInterface : NSObject

+ (id)cbPeripheralManagementSession;

- (id)tagSeparationSession;
- (id)firmwareUpdateSession;
- (id)persistentConnectionSession;
- (id)beaconSharingSession;
- (id)privateOwnerSession;
- (id)beaconSharingSessionWithToolingSupport;
- (id)maintenanceConnectionSession;
- (id)privateFirmwareUpdateSession;
- (id)fmipRegisterInfo;
- (id)ownerSession;
- (id)repairInterface;
- (id)settingsConfiguration;
- (id)certificationAssistantSession;
- (id)trackingAvoidanceService;
- (id)separationMonitoringSession;

@end
