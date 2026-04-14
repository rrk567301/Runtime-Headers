@interface VNProcessingDevice : NSObject <NSCopying>

+ (id)allDevices;
+ (id)defaultCPUDevice;
+ (id)defaultMetalDevice;
+ (void)_lockStaticObjectsAccessLock;
+ (id)defaultANEDevice;
+ (void)_unlockStaticObjectsAccessLock;
+ (void)forcedCleanup;
+ (id)defaultDevice;
+ (id)deviceForMetalDevice:(id)a0;
+ (id)directANEDevice;

- (id)metalDevice;
- (int)espressoStorageType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (int)espressoEngine;
- (BOOL)targetsGPU;
- (unsigned long long)hash;
- (BOOL)targetsCPU;
- (int)espressoDeviceID;
- (id)computeDevice;
- (id)description;
- (BOOL)targetsANE;

@end
