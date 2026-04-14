@class NSDictionary;

@interface VUIJSApplication : VUIJSObject <VUIJSApplication>

@property (readonly, nonatomic) BOOL isRunningSiri;
@property (readonly, nonatomic) NSDictionary *traitCollection;

- (void)ata_setTabBarItems:(id)a0 :(id)a1 :(id)a2;
- (void)launchAppWithOptions:(id)a0;
- (void)reload:(id)a0 :(id)a1;
- (void)resumeAppWithOptions:(id)a0;
- (void)suspendAppWithOptions:(id)a0;

@end
