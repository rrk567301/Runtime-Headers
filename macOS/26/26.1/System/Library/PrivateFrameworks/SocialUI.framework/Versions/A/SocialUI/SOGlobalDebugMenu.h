@interface SOGlobalDebugMenu : SODebugMenu

@property (readonly) BOOL isInstalled;

+ (id)sharedInstance;
+ (id)__singleton__im;
+ (void)__setSingleton__im:(id)a0;

- (void)update;
- (id)init;
- (void)installMenu;

@end
