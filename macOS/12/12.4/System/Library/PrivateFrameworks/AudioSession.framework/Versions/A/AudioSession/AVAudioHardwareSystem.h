@class NSArray;

@interface AVAudioHardwareSystem : AVAudioHardwareObject

@property (readonly, nonatomic) NSArray *audioDevices;
@property (readonly, nonatomic) NSArray *clockDevices;
@property (readonly, nonatomic) NSArray *boxes;
@property (readonly, nonatomic) NSArray *drivers;
@property (readonly, nonatomic) NSArray *inputPorts;
@property (readonly, nonatomic) NSArray *outputPorts;
@property (readonly, nonatomic) NSArray *publishedRoutes;

+ (id)sharedInstance;
+ (id)systemControllerInstance;
+ (id)legacyHALControllerInstance;

- (id)getDefaultRoute:(unsigned int)a0;
- (BOOL)setDefaultRoutePreference:(unsigned int)a0 route:(id)a1 controller:(id)a2 error:(id *)a3;
- (BOOL)publishRoute:(id)a0 controller:(id)a1 error:(id *)a2;
- (BOOL)updateRoute:(id)a0 controller:(id)a1 error:(id *)a2;
- (BOOL)unpublishRoute:(id)a0 controller:(id)a1 error:(id *)a2;
- (long long)createConfigurationChangeBlock:(id /* block */)a0;
- (void)destroyConfigurationChangeBlock:(long long)a0;
- (long long)createDefaultRouteChangeBlock:(id /* block */)a0;
- (void)destroyDefaultRouteChangeBlock:(long long)a0;
- (BOOL)setTransientDefaultRoutePreference:(unsigned int)a0 route:(id)a1 controller:(id)a2 error:(id *)a3;
- (id)createFakeDevice:(id)a0 controller:(id)a1 error:(id *)a2;
- (BOOL)destroyFakeDevice:(id)a0 controller:(id)a1 error:(id *)a2;

@end
