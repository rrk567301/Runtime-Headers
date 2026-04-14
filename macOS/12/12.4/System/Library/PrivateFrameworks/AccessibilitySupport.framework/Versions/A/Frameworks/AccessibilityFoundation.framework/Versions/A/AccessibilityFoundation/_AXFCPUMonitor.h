@interface _AXFCPUMonitor : _AXFResourceMonitor

- (BOOL)_resourceExceedLimitForProcess:(id)a0 criteria:(id)a1;
- (BOOL)_resourceExceedDuration:(double)a0 criteria:(id)a1;

@end
