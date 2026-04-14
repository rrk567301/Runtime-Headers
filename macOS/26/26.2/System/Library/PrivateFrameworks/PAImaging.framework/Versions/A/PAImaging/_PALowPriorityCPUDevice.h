@class PACPUDevice;

@interface _PALowPriorityCPUDevice : PADevice {
    PACPUDevice *_cpuDevice;
}

- (id)identifier;
- (void).cxx_destruct;
- (id)initWithCPUDevice:(id)a0;

@end
