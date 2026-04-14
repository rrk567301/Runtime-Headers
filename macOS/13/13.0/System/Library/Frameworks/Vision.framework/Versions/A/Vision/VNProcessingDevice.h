@interface VNProcessingDevice : NSObject <NSCopying>

+ (id)allDevices;
+ (void)forcedCleanup;
+ (void)_lockStaticObjectsAccessLock;
+ (void)_unlockStaticObjectsAccessLock;
+ (id)defaultDevice;
+ (id)defaultCPUDevice;
+ (id)defaultMetalDevice;
+ (id)deviceForMetalDevice:(id)a0;
+ (id)defaultANEDevice;
+ (id)directANEDevice;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)metalDevice;
- (BOOL)targetsANE;
- (int)espressoStorageType;
- (BOOL)targetsGPU;
- (int)espressoDeviceID;
- (int)espressoEngine;
- (BOOL)targetsCPU;

@end
