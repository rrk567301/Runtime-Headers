@class NSUserDefaults;

@interface WFSystemSurfaceWorkflowStatusRegistry : NSObject

@property (readonly, nonatomic) NSUserDefaults *shortcutsUserDefaults;

- (BOOL)setStatusForServicesWorkflows:(unsigned long long)a0;
- (unsigned long long)statusForSystemSurface:(unsigned long long)a0;
- (unsigned long long)statusForShareSheetWorkflows;
- (unsigned long long)statusForServicesWorkflows;
- (BOOL)setStatusForShareSheetWorkflows:(unsigned long long)a0;
- (BOOL)performShareSheetOptIn;
- (BOOL)setStatus:(unsigned long long)a0 forSystemSurface:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
