@interface VNCPUProcessingDevice : VNProcessingDevice

- (id)metalDevice;
- (int)espressoStorageType;
- (int)espressoEngine;
- (BOOL)targetsCPU;
- (id)computeDevice;

@end
