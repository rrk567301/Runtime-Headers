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
- (BOOL)setupNWStack:(id)a0;
- (id)getBridgeOSVersion;
- (id)getVolumeUUID;
- (id)getVersionData;
- (id)getCompatibleBridgeOSVersion:(id)a0;
- (BOOL)updateBootVolumeUUID:(BOOL)a0;
- (void)handleBootStateNotification:(unsigned char)a0;
- (void)handleSMCNotification:(unsigned char)a0 bootState:(unsigned char)a1;
- (BOOL)registerBootVolumeNotification;
- (id)loadCertsAndKey;
- (void)takeIdleSleepPowerAssertion;
- (BOOL)shouldUpdateKeychain:(id)a0;
- (BOOL)install:(id)a0 error:(out id *)a1;
- (BOOL)enableSMC:(BOOL)a0;
- (BOOL)getInfo:(id *)a0 error:(out id *)a1;

@end
