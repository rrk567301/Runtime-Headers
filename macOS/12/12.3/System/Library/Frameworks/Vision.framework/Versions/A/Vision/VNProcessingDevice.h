@interface VNProcessingDevice : NSObject <NSCopying>

+ (id)defaultCPUDevice;
+ (id)defaultDevice;
+ (id)defaultANEDevice;
+ (id)deviceForMetalDevice:(id)a0;
+ (id)defaultMetalDevice;
+ (id)allDevices;
+ (void)forcedCleanup;
+ (void)_lockStaticObjectsAccessLock;
+ (void)_unlockStaticObjectsAccessLock;
+ (id)directANEDevice;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)metalDevice;
- (BOOL)targetsCPU;
- (BOOL)targetsANE;
- (BOOL)targetsGPU;
- (int)espressoDeviceID;
- (int)espressoEngine;
- (int)espressoStorageType;

@end
