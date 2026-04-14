@class NSMutableDictionary;
@protocol CBBrightnessProxy;

@interface CBDisplayModuleDFR : CBDisplayModule {
    unsigned int _displayService;
    unsigned long long _registryID;
    float _currentNits;
    BOOL _useSecureIOCache;
    NSMutableDictionary *_secureIOCache;
    id<CBBrightnessProxy> _brightnessControl;
}

@property (readonly) struct __Display { } *displayInternal;

- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (void)start;
- (void)stop;
- (id)copyIdentifiers;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)copyPropertyInternalForKey:(id)a0;
- (BOOL)setBrightness:(float)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (void)displayBrightnessPropertyHandler:(id)a0;
- (BOOL)displayLogicalStatePropertyHandler:(id)a0;
- (BOOL)displayStatePropertyHandler:(id)a0;
- (BOOL)findBacklight;
- (id)initWithBrightnessControl:(id)a0 andQueue:(id)a1;
- (void)secureIOPropertyHandler:(id)a0;

@end
