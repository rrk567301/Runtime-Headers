@class NSString, NSMutableDictionary, NSDictionary, NSMutableArray;
@protocol CBContainerModuleProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol, CBBrightnessProxy, CBSystemContext;

@interface CBDisplayContainerSKL : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol> {
    id<CBBrightnessProxy> _brightnessControlProxy;
    NSMutableArray *_relevantServices;
    NSMutableArray<CBContainerModuleProtocol> *_modules;
    id<CBContainerModuleProtocol> _displayControlModule;
    id<CBContainerModuleProtocol, CBHIDServiceProtocol> _autoBrightnessModule;
    id<CBContainerModuleProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol> _harmonyModule;
    BOOL _isDFR;
    BOOL _isLegacyHID;
    BOOL _builtIn;
    BOOL _brightnessAvailable;
    BOOL _brightnessDisabled;
    BOOL _autoBrightnessDisabled;
    NSMutableDictionary *_systemState;
    NSDictionary *_capabilitiesCache;
    id<CBSystemContext> _systemContext;
}

@property (readonly) int displayID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyPropertyForKey:(id)a0;
- (BOOL)start;
- (void)dealloc;
- (void)stop;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)setPreference:(id)a0 forKey:(id)a1 user:(id)a2;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)setNightShiftFactorDictionary:(id)a0;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPreferenceForKey:(id)a0 user:(id)a1;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (void)setupBrightnessModulesHIDLegacy;
- (id)_copyContainerPropertyForKey:(id)a0;
- (BOOL)_setContainerProperty:(id)a0 forKey:(id)a1;
- (BOOL)didReconfigureBrightness;
- (void)handleBrightnessAvailability:(BOOL)a0;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1 from:(id)a2;
- (id)initWithBrightnessControl:(id)a0 andSystemContext:(id)a1;
- (id)newStatusInfo;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (void)setupBrightnessModules;
- (void)setupColorModule;
- (BOOL)systemStateContains:(id)a0;
- (void)tearDownBrightness;
- (void)tearDownColor;

@end
