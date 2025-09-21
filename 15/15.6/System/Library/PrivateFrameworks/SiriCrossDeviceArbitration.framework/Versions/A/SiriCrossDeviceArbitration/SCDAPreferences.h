@class AFInstanceContext, SCDAAssistantPreferences;

@interface SCDAPreferences : NSObject {
    AFInstanceContext *_instanceContext;
    SCDAAssistantPreferences *_pref;
}

- (void).cxx_destruct;
- (unsigned char)deviceClass;
- (unsigned char)deviceGroup;
- (void)setDeviceClass:(unsigned char)a0;
- (void)setDeviceDelay:(double)a0;
- (double)deviceDelay;
- (double)deviceTrumpDelay;
- (void)setDeviceTrumpDelay:(double)a0;
- (char)BLEActivityEnabled;
- (double)testDeviceDelay;
- (int)constantGoodnessScore;
- (char)coordinationEnabled;
- (char)coordinationEnabledForAccessoryLogging;
- (float)deviceAdjust;
- (double)deviceSlowDown;
- (void)enableCoordination:(char)a0;
- (char)ignoreAdjustedBoost;
- (char)ignorePlatformBias;
- (id)initWithDeviceInstanceContext:(id)a0 preferences:(id)a1;
- (double)maxNoOperationDelay;
- (char)myriadServerHasProvisioned;
- (void)setConstantGoodnessScore:(int)a0;
- (void)setDeviceAdjust:(float)a0;
- (void)setDeviceGroup:(unsigned char)a0 completion:(id /* block */)a1;
- (void)setDeviceSlowDown:(double)a0;
- (void)setIgnoreAdjustedBoost:(char)a0;
- (void)setIgnorePlatformBias:(char)a0;
- (void)setMaxNoOperationDelay:(double)a0;
- (void)setTestDeviceDelay:(double)a0;
- (void)setVoiceTriggerEndtimeDelayThreshold:(double)a0;
- (double)voiceTriggerEndtimeDelayThreshold;

@end
