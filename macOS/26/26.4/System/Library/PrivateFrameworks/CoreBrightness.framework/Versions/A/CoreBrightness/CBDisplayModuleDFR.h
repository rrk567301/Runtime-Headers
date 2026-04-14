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

- (void)stop;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (id)copyIdentifiers;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)copyPropertyInternalForKey:(id)a0;
- (void)start;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (BOOL)setBrightness:(float)a0;
- (void)dealloc;
- (void)displayBrightnessPropertyHandler:(id)a0;
- (BOOL)displayLogicalStatePropertyHandler:(id)a0;
- (BOOL)displayStatePropertyHandler:(id)a0;
- (BOOL)findBacklight;
- (id)initWithBrightnessControl:(id)a0 andQueue:(id)a1;
- (void)secureIOPropertyHandler:(id)a0;

@end
