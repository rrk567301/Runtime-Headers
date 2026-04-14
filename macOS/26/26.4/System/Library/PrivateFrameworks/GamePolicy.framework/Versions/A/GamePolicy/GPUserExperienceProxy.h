@interface GPUserExperienceProxy : NSObject

+ (id)proxy;

- (void)launchGameOverlayWithOptions:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)launchGamesApp;
- (void)launchGameOverlay;

@end
