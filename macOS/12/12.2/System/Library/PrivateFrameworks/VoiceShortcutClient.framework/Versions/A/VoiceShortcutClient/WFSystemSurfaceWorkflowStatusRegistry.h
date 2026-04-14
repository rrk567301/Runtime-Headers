@interface WFSystemSurfaceWorkflowStatusRegistry : NSObject

- (id)init;
- (unsigned long long)statusForSystemSurface:(unsigned long long)a0;
- (BOOL)setStatus:(unsigned long long)a0 forSystemSurface:(unsigned long long)a1;
- (unsigned long long)statusForShareSheetWorkflows;
- (BOOL)setStatusForShareSheetWorkflows:(unsigned long long)a0;
- (unsigned long long)statusForServicesWorkflows;
- (BOOL)setStatusForServicesWorkflows:(unsigned long long)a0;

@end
