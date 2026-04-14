@interface NSCGSDockNotifications : NSObject

+ (void)addRectChangedHandlerWithOrder:(long long)a0 block:(id /* block */)a1;
+ (void)addDockAliveHandlerWithOrder:(long long)a0 block:(id /* block */)a1;
+ (void)addDoMenuCommandHandler:(id /* block */)a0;
+ (void)addDockAliveHandler:(id /* block */)a0;
+ (void)addDockDiedHandler:(id /* block */)a0;
+ (void)addGetAppMenuHandler:(id /* block */)a0;
+ (void)addMaximizedWindowsHandler:(id /* block */)a0;
+ (void)addMiniViewHiddenHandler:(id /* block */)a0;
+ (void)addMiniViewShownHandler:(id /* block */)a0;
+ (void)addMinimizeEffectDoneHandler:(id /* block */)a0;
+ (void)addRestoreEffectDoneHandler:(id /* block */)a0;
+ (void)addRectChangedHandler:(id /* block */)a0;
+ (void)addResolutionChangedHandler:(id /* block */)a0;
+ (void)addSelectWindowHandler:(id /* block */)a0;

@end
