@interface _TtCCV13HomeDataModel9HomeState6Stream24UngenericHomeKitDelegate : NSObject <HMAccessorySoftwareUpdateControllerV2Delegate, HMSoftwareUpdateDelegate, HMResidentDeviceDelegate, HMSymptomsHandlerDelegate, HMLightProfileDelegate, HMMediaObjectDelegate> {
    void /* unknown type, empty encoding */ stateSnapshotUpdateController;
}

- (id)init;
- (void).cxx_destruct;
- (void)mediaObject:(id)a0 didUpdateMediaSession:(id)a1;
- (void)lightProfile:(id)a0 didUpdateSettings:(id)a1;
- (void)residentDevice:(id)a0 didUpdateStatus:(unsigned long long)a1;
- (void)softwareUpdate:(id)a0 didUpdateDocumentation:(id)a1;
- (void)softwareUpdate:(id)a0 didUpdateState:(long long)a1;
- (void)softwareUpdateController:(id)a0 accessory:(id)a1 didReceiveUpdate:(id)a2;
- (void)softwareUpdateController:(id)a0 accessory:(id)a1 didUpdateProgress:(id)a2;
- (void)symptomsHandler:(id)a0 didUpdateSymptoms:(id)a1;
- (void)softwareUpdateController:(id)a0 accessory:(id)a1 didFailUpdate:(id)a2 withError:(id)a3 timestamp:(id)a4;

@end
