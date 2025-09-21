@interface VNProcessingDevice : NSObject <NSCopying>

+ (id)allDevices;
+ (id)directANEDevice;
+ (void)_lockStaticObjectsAccessLock;
+ (void)_unlockStaticObjectsAccessLock;
+ (id)defaultANEDevice;
+ (id)defaultCPUDevice;
+ (id)defaultDevice;
+ (id)defaultMetalDevice;
+ (id)deviceForMetalDevice:(id)a0;
+ (void)forcedCleanup;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)metalDevice;
- (id)computeDevice;
- (int)espressoDeviceID;
- (int)espressoEngine;
- (int)espressoStorageType;
- (char)targetsANE;
- (char)targetsCPU;
- (char)targetsGPU;

@end
