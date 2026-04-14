@interface VNProcessingDevice : NSObject <NSCopying>

+ (id)defaultMetalDevice;
+ (id)deviceForMetalDevice:(id)a0;
+ (id)defaultCPUDevice;
+ (id)allDevices;
+ (void)_unlockStaticObjectsAccessLock;
+ (void)forcedCleanup;
+ (id)defaultDevice;
+ (id)defaultANEDevice;
+ (id)directANEDevice;
+ (void)_lockStaticObjectsAccessLock;

- (int)espressoDeviceID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)targetsGPU;
- (int)espressoStorageType;
- (id)description;
- (id)metalDevice;
- (int)espressoEngine;
- (BOOL)targetsCPU;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)computeDevice;
- (BOOL)targetsANE;

@end
