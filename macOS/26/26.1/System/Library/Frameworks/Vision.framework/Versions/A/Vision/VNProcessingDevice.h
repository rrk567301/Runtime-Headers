@interface VNProcessingDevice : NSObject <NSCopying>

+ (id)allDevices;
+ (id)defaultANEDevice;
+ (id)defaultMetalDevice;
+ (id)deviceForMetalDevice:(id)a0;
+ (id)directANEDevice;
+ (id)defaultCPUDevice;
+ (void)_lockStaticObjectsAccessLock;
+ (void)_unlockStaticObjectsAccessLock;
+ (id)defaultDevice;
+ (void)forcedCleanup;

- (int)espressoStorageType;
- (int)espressoEngine;
- (id)metalDevice;
- (unsigned long long)hash;
- (BOOL)targetsGPU;
- (id)description;
- (int)espressoDeviceID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)targetsCPU;
- (BOOL)isEqual:(id)a0;
- (id)computeDevice;
- (BOOL)targetsANE;

@end
