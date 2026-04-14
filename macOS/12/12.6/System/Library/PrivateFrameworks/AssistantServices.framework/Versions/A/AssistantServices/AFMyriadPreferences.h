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
- (BOOL)coordinationEnabled;
- (BOOL)BLEActivityEnabled;
- (double)deviceSlowDown;
- (int)constantGoodnessScore;
- (float)deviceAdjust;
- (double)voiceTriggerEndtimeDelayThreshold;
- (double)testDeviceDelay;
- (void)setDeviceGroup:(unsigned char)a0 completion:(id /* block */)a1;
- (void)setIgnoreAdjustedBoost:(BOOL)a0;
- (BOOL)ignoreAdjustedBoost;
- (void)setIgnorePlatformBias:(BOOL)a0;
- (BOOL)ignorePlatformBias;
- (void)setConstantGoodnessScore:(int)a0;
- (void)setDeviceAdjust:(float)a0;
- (void)setTestDeviceDelay:(double)a0;
- (void)enableCoordination:(BOOL)a0;
- (BOOL)coordinationEnabledForAccessoryLogging;
- (void)setVoiceTriggerEndtimeDelayThreshold:(double)a0;
- (void)setDeviceSlowDown:(double)a0;
- (void)setMaxNoOperationDelay:(double)a0;
- (double)maxNoOperationDelay;

@end
