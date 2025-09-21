@interface LOMDeviceServerRemote : LOMDeviceServerConsolidated {
    unsigned int _assertionID;
    unsigned long long _smcNotificationHandle;
}

- (id)description;
- (char)start;
- (id)initWithServiceName:(id)a0;
- (void)stop;
- (id)serialize;
- (char)remove:(id)a0 error:(out id *)a1;
- (id)loadCertsAndKey;
- (char)enableSMC:(char)a0;
- (id)getBridgeOSVersion;
- (id)getCompatibleBridgeOSVersion:(id)a0;
- (char)getInfo:(id *)a0 error:(out id *)a1;
- (id)getVersionData;
- (id)getVolumeUUID;
- (void)handleBootStateNotification:(unsigned char)a0;
- (void)handleSMCNotification:(unsigned char)a0 bootState:(unsigned char)a1;
- (char)install:(id)a0 error:(out id *)a1;
- (char)registerBootVolumeNotification;
- (char)setupNWStack:(id)a0;
- (char)shouldUpdateKeychain:(id)a0;
- (void)takeIdleSleepPowerAssertion;
- (char)updateBootVolumeUUID:(char)a0;

@end
