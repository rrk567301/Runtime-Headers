@class NSUserDefaults;

@interface WFSystemSurfaceWorkflowStatusRegistry : NSObject

@property (readonly, nonatomic) NSUserDefaults *shortcutsUserDefaults;

- (BOOL)performShareSheetOptIn;
- (BOOL)setStatusForShareSheetWorkflows:(unsigned long long)a0;
- (BOOL)setStatus:(unsigned long long)a0 forSystemSurface:(unsigned long long)a1;
- (BOOL)setStatusForServicesWorkflows:(unsigned long long)a0;
- (id)init;
- (unsigned long long)statusForShareSheetWorkflows;
- (unsigned long long)statusForServicesWorkflows;
- (unsigned long long)statusForSystemSurface:(unsigned long long)a0;
- (void).cxx_destruct;

@end
