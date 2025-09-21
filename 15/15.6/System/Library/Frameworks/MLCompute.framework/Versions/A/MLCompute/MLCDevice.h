@class NSArray;
@protocol MLComputeEngineControl, MLCLayerOperations, MLCDeviceProperties, MLComputeEngineOptimizerUpdate, MLCEngineDispatch;

@interface MLCDevice : NSObject <NSCopying>

@property (nonatomic) int type;
@property (retain, nonatomic) id<MLCDeviceProperties> engine;
@property (retain, nonatomic) id<MLComputeEngineControl, MLCLayerOperations, MLCEngineDispatch, MLComputeEngineOptimizerUpdate, MLCDeviceProperties> computeEngine;
@property (readonly, nonatomic) int actualDeviceType;
@property (readonly, nonatomic) NSArray *gpuDevices;

+ (id)deviceWithType:(int)a0;
+ (id)cpuDevice;
+ (id)aneDevice;
+ (id)deviceWithGPUDevices:(id)a0;
+ (id)deviceWithType:(int)a0 selectsMultipleComputeDevices:(char)a1;
+ (id)gpuDevice;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithGPUs:(id)a0;
- (id)initWithType:(int)a0 engine:(id)a1;
- (id)initWithType:(int)a0 selectsMultipleComputeDevices:(char)a1;
- (char)isEqualToDevice:(id)a0;
- (void)switchToCPUDevice;

@end
