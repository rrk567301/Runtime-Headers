@interface VNCPUProcessingDevice : VNProcessingDevice

- (int)espressoEngine;
- (int)espressoStorageType;
- (id)computeDevice;
- (BOOL)targetsCPU;
- (id)metalDevice;

@end
