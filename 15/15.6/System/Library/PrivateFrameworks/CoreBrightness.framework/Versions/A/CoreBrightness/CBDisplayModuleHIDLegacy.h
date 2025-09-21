@class NSString, HIDElement, HIDDevice, NSObject;
@protocol OS_os_log, CBBrightnessProxy;

@interface CBDisplayModuleHIDLegacy : CBDisplayModule <CBContainerModuleProtocol> {
    id<CBBrightnessProxy> _brightnessControlProxy;
    NSObject<OS_os_log> *_logHandle;
    HIDDevice *_brightnessDevice;
    float _userBrightness;
    char _ALCEnabled;
    struct IONotificationPort { } *_brightnessServiceArrivalNotificationPort;
    unsigned int _brightnessServiceArrivalIterator;
    HIDElement *_elementBrightness;
    HIDElement *_elementALCState;
    HIDElement *_elementALCReset;
    HIDElement *_elementMacMode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsBrightnessControlForDisplayWithVID:(unsigned long long)a0 andPID:(unsigned long long)a1;

- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)start;
- (void)stop;
- (char)isOnline;
- (void)ALCBrightnessUpdate:(float)a0;
- (char)supportsMacMode;
- (void)brightnessArrivalHandler:(unsigned int)a0;
- (void)brightnessArrivalHandler:(unsigned int)a0 matchEDIDserialNumber:(BOOL)a1;
- (id)copyPropertyForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (char)getALCState;
- (unsigned long long)getDeviceID;
- (float)getUserBrightness;
- (float)getUserBrightnessFromElement;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (char)handleSetALCStateProperty:(id)a0;
- (char)handleSetBrightnessCommit:(id)a0;
- (char)handleSetBrightnessProperty:(id)a0;
- (char)handleSetBrightnessSmoothProperty:(id)a0;
- (id)initWithBrightnessControl:(id)a0 andQueue:(id)a1;
- (id)newDisplayInfo;
- (id)newStatusInfo;
- (char)resetALC;
- (void)retrieveCurrentStateFromHW;
- (void)sendAvailabilityNotifications;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (char)setALCState:(char)a0;
- (char)setDeviceBrightness:(float)a0;
- (void)setMacMode;
- (char)setUserBrightness:(float)a0;
- (void)startHIDDeviceLookup;
- (void)stopHIDDeviceLookup;
- (char)supportsALC;
- (char)supportsALCReset;
- (char)supportsBrightness;

@end
