@class NSArray, NSString;
@protocol NUDevice, NUDisplay;

@interface NUPlatform : NSObject

@property (copy, nonatomic) NSArray *devices;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char supportsAutomaticGraphicsSwitching;
@property (retain, nonatomic) id<NUDevice> integratedDevice;
@property (retain, nonatomic) id<NUDevice> discreteDevice;
@property (nonatomic) char hasHeadlessGPU;
@property (retain, nonatomic) id<NUDevice> headlessDevice;
@property (retain, nonatomic) id<NUDevice> cpuDevice;
@property (readonly, nonatomic) char defaultSupportsLiveVideoRendering;
@property (nonatomic) char hasExtendedColorDisplay;
@property (readonly, nonatomic) id<NUDevice> mainDevice;
@property (readonly, nonatomic) char hasDiscreteGPU;
@property (readonly, nonatomic) NSArray *displays;
@property (readonly, nonatomic) id<NUDisplay> mainDisplay;
@property (readonly, nonatomic) char supportsLiveVideoRendering;
@property (readonly, nonatomic) char supportsANE;

+ (id)currentPlatform;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)clearCaches;
- (id)currentDevice;
- (id)deviceForMetalDevice:(id)a0;
- (id)deviceForDisplay:(id)a0;
- (id)displayWithIdentifier:(id)a0;

@end
