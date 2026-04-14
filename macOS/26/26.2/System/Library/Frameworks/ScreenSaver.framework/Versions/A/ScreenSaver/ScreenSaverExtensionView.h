@class NSString, ScreenSaverExtensionModule, ScreenSaverRemoteViewController;

@interface ScreenSaverExtensionView : ScreenSaverView <ScreenSaverRemoteViewControllerDelegate> {
    ScreenSaverRemoteViewController *_remoteViewController;
    ScreenSaverExtensionModule *_module;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)setRemoteViewController:(id)a0;
- (void)dealloc;
- (void)screenSaverRemoteViewController:(id)a0 didTerminateWithError:(id)a1;
- (void)setScreenSaverModule:(id)a0;

@end
