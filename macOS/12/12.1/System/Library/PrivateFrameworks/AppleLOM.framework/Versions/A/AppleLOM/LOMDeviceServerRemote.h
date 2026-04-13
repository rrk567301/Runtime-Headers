@interface LOMDeviceServerRemote : LOMDeviceServerConsolidated {
    unsigned int _assertionID;
    unsigned long long _smcNotificationHandle;
}

- (id)description;
- (BOOL)start;
- (void)stop;
- (id)initWithServiceName:(id)a0;
- (id)serialize;
- (BOOL)remove:(id)a0 error:(out id *)a1;
- (id)getVolumeUUID;
- (id)getVersionData;
- (id)getCompatibleBridgeOSVersion:(id)a0;
- (id)getBridgeOSVersion;
- (void)handleBootStateNotification:(unsigned char)a0;
- (void)handleSMCNotification:(unsigned char)a0 bootState:(unsigned char)a1;
- (BOOL)setupNWStack:(id)a0;
- (void)takeIdleSleepPowerAssertion;
- (BOOL)registerBootVolumeNotification;
- (BOOL)shouldUpdateKeychain:(id)a0;
- (BOOL)updateBootVolumeUUID:(BOOL)a0;
- (id)loadCertsAndKey;
- (BOOL)install:(id)a0 error:(out id *)a1;
- (BOOL)enableSMC:(BOOL)a0;
- (BOOL)getInfo:(id *)a0 error:(out id *)a1;

@end
