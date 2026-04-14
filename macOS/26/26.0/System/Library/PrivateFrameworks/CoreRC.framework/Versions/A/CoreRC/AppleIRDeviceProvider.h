@class AppleIRCommand;

@interface AppleIRDeviceProvider : CoreIRDeviceProvider {
    unsigned long long _lastCommandTimestamp;
    unsigned long long _pressAndHoldTimeoutGenerationCount;
    AppleIRCommand *_lastAppleIRCommand;
    unsigned long long _lastCoreRCCommand;
    BOOL _isB39;
}

@property (readonly, nonatomic) unsigned char deviceUID;

+ (void)load;
+ (BOOL)supportsSecureCoding;

- (void)setVendorID:(unsigned long long)a0;
- (unsigned long long)vendorID;
- (void)dealloc;
- (Class)classForCoder;
- (id)init;
- (void)_cancelPressAndHoldTimer;
- (BOOL)_dispatchAppleVendorEventPage:(unsigned int)a0 usage:(unsigned int)a1 timestamp:(unsigned long long)a2 toDevice:(id)a3;
- (BOOL)_dispatchEventWithCommand:(unsigned long long)a0 timestamp:(unsigned long long)a1 toDevice:(id)a2;
- (void)_schedulePressAndHoldTimer;
- (void)_synthesizeButtonReleaseWithTimestamp:(unsigned long long)a0;
- (id)busProvider;
- (BOOL)dispatchEventsForCommand:(id)a0 toDevice:(id)a1;
- (id)initWithBus:(id)a0 deviceUID:(unsigned char)a1;
- (BOOL)isAppleRemote;
- (BOOL)pairAppleRemote:(id *)a0;
- (BOOL)unpairAppleRemote:(id *)a0;

@end
