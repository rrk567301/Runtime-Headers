@class NSUserDefaults;

@interface WFSystemSurfaceWorkflowStatusRegistry : NSObject

@property (readonly, nonatomic) NSUserDefaults *shortcutsUserDefaults;

- (id)init;
- (void).cxx_destruct;
- (char)performShareSheetOptIn;
- (char)setStatus:(unsigned long long)a0 forSystemSurface:(unsigned long long)a1;
- (char)setStatusForServicesWorkflows:(unsigned long long)a0;
- (char)setStatusForShareSheetWorkflows:(unsigned long long)a0;
- (unsigned long long)statusForServicesWorkflows;
- (unsigned long long)statusForShareSheetWorkflows;
- (unsigned long long)statusForSystemSurface:(unsigned long long)a0;

@end
