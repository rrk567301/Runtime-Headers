@interface VNProcessingDevice : NSObject <NSCopying>

+ (id)defaultANEDevice;
+ (void)_unlockStaticObjectsAccessLock;
+ (id)deviceForMetalDevice:(id)a0;
+ (id)defaultMetalDevice;
+ (void)_lockStaticObjectsAccessLock;
+ (void)forcedCleanup;
+ (id)defaultDevice;
+ (id)defaultCPUDevice;
+ (id)allDevices;
+ (id)directANEDevice;

- (int)espressoEngine;
- (int)espressoStorageType;
- (unsigned long long)hash;
- (BOOL)targetsCPU;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)computeDevice;
- (int)espressoDeviceID;
- (id)description;
- (id)metalDevice;
- (BOOL)targetsGPU;
- (BOOL)targetsANE;

@end
