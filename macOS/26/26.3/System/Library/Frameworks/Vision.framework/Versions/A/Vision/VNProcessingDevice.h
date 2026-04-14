@interface VNProcessingDevice : NSObject <NSCopying>

+ (id)defaultDevice;
+ (id)deviceForMetalDevice:(id)a0;
+ (id)defaultANEDevice;
+ (id)defaultMetalDevice;
+ (void)_lockStaticObjectsAccessLock;
+ (id)allDevices;
+ (id)defaultCPUDevice;
+ (void)forcedCleanup;
+ (id)directANEDevice;
+ (void)_unlockStaticObjectsAccessLock;

- (int)espressoEngine;
- (id)description;
- (int)espressoStorageType;
- (id)computeDevice;
- (int)espressoDeviceID;
- (BOOL)targetsGPU;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)targetsCPU;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)metalDevice;
- (BOOL)targetsANE;

@end
