@class NSString, HIDElement, HIDDevice, NSObject;
@protocol OS_os_log, SLSBrightnessControl;

@interface CBDisplayModuleHIDLegacy : CBDisplayModule <CBContainerModuleProtocol> {
    id<SLSBrightnessControl> _brightnessControlProxy;
    NSObject<OS_os_log> *_logHandle;
    HIDDevice *_brightnessDevice;
    float _userBrightness;
    BOOL _ALCEnabled;
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

+ (BOOL)supportsBrightnessControlForDisplayWithVID:(unsigned long long)a0 andPID:(unsigned long long)a1;

- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)start;
- (void)stop;
- (BOOL)isOnline;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (unsigned long long)getDeviceID;
- (id)newDisplayInfo;
- (id)newStatusInfo;
- (float)getUserBrightness;
- (id)initWithBrightnessControl:(id)a0 andQueue:(id)a1;
- (void)startHIDDeviceLookup;
- (void)stopHIDDeviceLookup;
- (void)brightnessArrivalHandler:(unsigned int)a0;
- (BOOL)supportsBrightness;
- (BOOL)supportsALC;
- (BOOL)getALCState;
- (BOOL)supportsALCReset;
- (BOOL)handleSetALCStateProperty:(id)a0;
- (BOOL)resetALC;
- (BOOL)handleSetBrightnessProperty:(id)a0;
- (BOOL)handleSetBrightnessSmoothProperty:(id)a0;
- (BOOL)handleSetBrightnessCommit:(id)a0;
- (BOOL)setALCState:(BOOL)a0;
- (BOOL)setUserBrightness:(float)a0;
- (BOOL)setDeviceBrightness:(float)a0;
- (void)retrieveCurrentStateFromHW;
- (float)getUserBrightnessFromElement;
- (void)sendAvailabilityNotifications;
- (void)ALCBrightnessUpdate:(float)a0;
- (BOOL)supportsMacMode;
- (void)setMacMode;

@end
