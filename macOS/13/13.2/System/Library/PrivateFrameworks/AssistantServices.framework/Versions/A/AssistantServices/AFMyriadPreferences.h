@class AFInstanceContext, AFPreferences;

@interface AFMyriadPreferences : NSObject {
    AFInstanceContext *_instanceContext;
    AFPreferences *_pref;
}

- (void).cxx_destruct;
- (unsigned char)deviceClass;
- (unsigned char)deviceGroup;
- (void)setDeviceClass:(unsigned char)a0;
- (double)deviceDelay;
- (void)setDeviceDelay:(double)a0;
- (double)deviceTrumpDelay;
- (void)setDeviceTrumpDelay:(double)a0;
- (BOOL)myriadServerHasProvisioned;
- (id)initWithDeviceInstanceContext:(id)a0 preferences:(id)a1;
- (void)setDeviceGroup:(unsigned char)a0 completion:(id /* block */)a1;
- (void)setIgnoreAdjustedBoost:(BOOL)a0;
- (BOOL)ignoreAdjustedBoost;
- (void)setIgnorePlatformBias:(BOOL)a0;
- (BOOL)ignorePlatformBias;
- (void)setConstantGoodnessScore:(int)a0;
- (int)constantGoodnessScore;
- (void)setDeviceAdjust:(float)a0;
- (float)deviceAdjust;
- (void)setTestDeviceDelay:(double)a0;
- (double)testDeviceDelay;
- (void)enableCoordination:(BOOL)a0;
- (BOOL)coordinationEnabled;
- (BOOL)coordinationEnabledForAccessoryLogging;
- (BOOL)BLEActivityEnabled;
- (void)setVoiceTriggerEndtimeDelayThreshold:(double)a0;
- (double)voiceTriggerEndtimeDelayThreshold;
- (void)setDeviceSlowDown:(double)a0;
- (double)deviceSlowDown;
- (void)setMaxNoOperationDelay:(double)a0;
- (double)maxNoOperationDelay;

@end
