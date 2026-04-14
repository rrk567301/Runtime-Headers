@class NSUserDefaults;

@interface WFSystemSurfaceWorkflowStatusRegistry : NSObject

@property (readonly, nonatomic) NSUserDefaults *shortcutsUserDefaults;

- (BOOL)setStatus:(unsigned long long)a0 forSystemSurface:(unsigned long long)a1;
- (unsigned long long)statusForSystemSurface:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)statusForShareSheetWorkflows;
- (unsigned long long)statusForServicesWorkflows;
- (id)init;
- (BOOL)performShareSheetOptIn;
- (BOOL)setStatusForServicesWorkflows:(unsigned long long)a0;
- (BOOL)setStatusForShareSheetWorkflows:(unsigned long long)a0;

@end
