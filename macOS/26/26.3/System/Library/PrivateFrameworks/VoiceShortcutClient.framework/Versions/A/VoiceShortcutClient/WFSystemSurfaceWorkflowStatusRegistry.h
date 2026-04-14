@class NSUserDefaults;

@interface WFSystemSurfaceWorkflowStatusRegistry : NSObject

@property (readonly, nonatomic) NSUserDefaults *shortcutsUserDefaults;

- (unsigned long long)statusForServicesWorkflows;
- (id)init;
- (BOOL)setStatus:(unsigned long long)a0 forSystemSurface:(unsigned long long)a1;
- (unsigned long long)statusForSystemSurface:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)performShareSheetOptIn;
- (unsigned long long)statusForShareSheetWorkflows;
- (BOOL)setStatusForShareSheetWorkflows:(unsigned long long)a0;
- (BOOL)setStatusForServicesWorkflows:(unsigned long long)a0;

@end
