@class NSUserDefaults;

@interface WFSystemSurfaceWorkflowStatusRegistry : NSObject

@property (readonly, nonatomic) NSUserDefaults *shortcutsUserDefaults;

- (BOOL)setStatusForShareSheetWorkflows:(unsigned long long)a0;
- (BOOL)setStatusForServicesWorkflows:(unsigned long long)a0;
- (BOOL)setStatus:(unsigned long long)a0 forSystemSurface:(unsigned long long)a1;
- (BOOL)performShareSheetOptIn;
- (void).cxx_destruct;
- (unsigned long long)statusForSystemSurface:(unsigned long long)a0;
- (unsigned long long)statusForShareSheetWorkflows;
- (unsigned long long)statusForServicesWorkflows;
- (id)init;

@end
