@interface SPOwnerInterface : NSObject

+ (id)cbPeripheralManagementSession;

- (id)certificationAssistantSession;
- (id)persistentConnectionSession;
- (id)maintenanceConnectionSession;
- (id)fmipRegisterInfo;
- (id)beaconSharingSessionWithToolingSupport;
- (id)firmwareUpdateSession;
- (id)separationMonitoringSession;
- (id)ownerSession;
- (id)settingsConfiguration;
- (id)repairInterface;
- (id)trackingAvoidanceService;
- (id)privateOwnerSession;
- (id)tagSeparationSession;
- (id)privateFirmwareUpdateSession;
- (id)beaconSharingSession;

@end
