@interface VNCPUProcessingDevice : VNProcessingDevice

- (int)espressoStorageType;
- (int)espressoEngine;
- (id)metalDevice;
- (BOOL)targetsCPU;
- (id)computeDevice;

@end
