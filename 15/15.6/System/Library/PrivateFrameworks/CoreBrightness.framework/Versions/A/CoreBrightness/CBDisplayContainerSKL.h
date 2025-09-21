@class NSString, NSMutableDictionary, NSDictionary, NSMutableArray;
@protocol CBContainerModuleProtocol, CBHIDServiceProtocol, CBContainerProtocol, CBBrightnessProxy, NightShiftSupportProtocol;

@interface CBDisplayContainerSKL : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol> {
    id<CBBrightnessProxy> _brightnessControlProxy;
    NSMutableArray *_relevantServices;
    NSMutableArray<CBContainerModuleProtocol> *_modules;
    id<CBContainerModuleProtocol> _displayControlModule;
    id<CBContainerModuleProtocol, CBHIDServiceProtocol> _autoBrightnessModule;
    id<CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol> _harmonyContainer;
    char _isDFR;
    char _isLegacyHID;
    char _builtIn;
    char _brightnessAvailable;
    char _brightnessDisabled;
    char _autoBrightnessDisabled;
    NSMutableDictionary *_systemState;
    NSDictionary *_capabilitiesCache;
}

@property (readonly) int displayID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (char)start;
- (void)stop;
- (void)setupBrightnessModulesHIDLegacy;
- (id)_copyContainerPropertyForKey:(id)a0;
- (char)_setContainerProperty:(id)a0 forKey:(id)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPreferenceForKey:(id)a0 user:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (char)didReconfigureBrightness;
- (void)handleBrightnessAvailability:(char)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1 from:(id)a2;
- (id)initWithBrightnessControl:(id)a0;
- (id)newStatusInfo;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (void)setNightShiftFactorDictionary:(id)a0;
- (void)setPreference:(id)a0 forKey:(id)a1 user:(id)a2;
- (void)setupBrightnessModules;
- (void)setupColorModule;
- (char)systemStateContains:(id)a0;
- (void)tearDownBrightness;
- (void)tearDownColor;

@end
