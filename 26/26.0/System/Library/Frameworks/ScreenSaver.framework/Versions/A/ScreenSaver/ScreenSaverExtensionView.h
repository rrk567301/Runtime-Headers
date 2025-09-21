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
- (void)dealloc;
- (void)stopAnimation;
- (void)setRemoteViewController:(id)a0;
- (void).cxx_destruct;
- (void)screenSaverRemoteViewController:(id)a0 didTerminateWithError:(id)a1;
- (void)setScreenSaverModule:(id)a0;

@end
