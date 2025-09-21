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
+ (id)legacyHALControllerInstance;
+ (id)systemControllerInstance;

- (long long)createConfigurationChangeBlock:(id /* block */)a0;
- (void)destroyDefaultRouteChangeBlock:(long long)a0;
- (long long)createDefaultRouteChangeBlock:(id /* block */)a0;
- (id)createFakeDevice:(id)a0 controller:(id)a1 error:(id *)a2;
- (void)destroyConfigurationChangeBlock:(long long)a0;
- (char)destroyFakeDevice:(id)a0 controller:(id)a1 error:(id *)a2;
- (id)getDefaultRoute:(unsigned int)a0;
- (char)publishRoute:(id)a0 controller:(id)a1 error:(id *)a2;
- (char)setDefaultRoutePreference:(unsigned int)a0 route:(id)a1 controller:(id)a2 error:(id *)a3;
- (char)setTransientDefaultRoutePreference:(unsigned int)a0 route:(id)a1 controller:(id)a2 error:(id *)a3;
- (char)unpublishRoute:(id)a0 controller:(id)a1 error:(id *)a2;
- (char)updateRoute:(id)a0 controller:(id)a1 error:(id *)a2;

@end
