@interface VNCPUProcessingDevice : VNProcessingDevice

- (id)metalDevice;
- (id)computeDevice;
- (int)espressoEngine;
- (int)espressoStorageType;
- (char)targetsCPU;

@end
