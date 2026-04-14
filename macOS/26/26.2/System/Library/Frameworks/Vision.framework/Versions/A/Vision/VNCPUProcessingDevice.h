@interface VNCPUProcessingDevice : VNProcessingDevice

- (int)espressoEngine;
- (int)espressoStorageType;
- (BOOL)targetsCPU;
- (id)computeDevice;
- (id)metalDevice;

@end
