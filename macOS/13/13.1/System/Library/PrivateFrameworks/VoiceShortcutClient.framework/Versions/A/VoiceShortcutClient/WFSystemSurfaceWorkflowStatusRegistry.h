@class NSUserDefaults;

@interface WFSystemSurfaceWorkflowStatusRegistry : NSObject

@property (readonly, nonatomic) NSUserDefaults *shortcutsUserDefaults;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)statusForSystemSurface:(unsigned long long)a0;
- (BOOL)setStatus:(unsigned long long)a0 forSystemSurface:(unsigned long long)a1;
- (unsigned long long)statusForShareSheetWorkflows;
- (BOOL)setStatusForShareSheetWorkflows:(unsigned long long)a0;
- (BOOL)performShareSheetOptIn;
- (unsigned long long)statusForServicesWorkflows;
- (BOOL)setStatusForServicesWorkflows:(unsigned long long)a0;

@end
