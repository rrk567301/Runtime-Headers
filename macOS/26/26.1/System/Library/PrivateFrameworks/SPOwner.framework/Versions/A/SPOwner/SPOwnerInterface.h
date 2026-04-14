@interface SPOwnerInterface : NSObject

+ (id)cbPeripheralManagementSession;

- (id)settingsConfiguration;
- (id)privateFirmwareUpdateSession;
- (id)repairInterface;
- (id)fmipRegisterInfo;
- (id)beaconSharingSessionWithToolingSupport;
- (id)persistentConnectionSession;
- (id)certificationAssistantSession;
- (id)privateOwnerSession;
- (id)tagSeparationSession;
- (id)maintenanceConnectionSession;
- (id)firmwareUpdateSession;
- (id)trackingAvoidanceService;
- (id)separationMonitoringSession;
- (id)beaconSharingSession;
- (id)ownerSession;

@end
