@class NSURL, TFImageFetcher, TFLaunchScreen;
@protocol TFBetaAppLaunchDataProvider, TFBetaAppLaunchPresenterView;

@interface TFBetaAppLaunchPresenter : NSObject

@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) id<TFBetaAppLaunchDataProvider> launchDataProvider;
@property (readonly, nonatomic) TFImageFetcher *imageFetcher;
@property (retain, nonatomic) TFLaunchScreen *launchScreen;
@property (weak, nonatomic) id<TFBetaAppLaunchPresenterView> presenterView;

- (void).cxx_destruct;
- (void)update;
- (void)_showHowToViewWithLaunchScreen:(id)a0;
- (void)showHowToScreen;
- (void)_abortLaunchScreenLoadWithError:(id)a0;
- (void)_showLoading;
- (void)_showTestNotesViewWithLaunchScreen:(id)a0;
- (void)exitLaunchScreen;
- (id)initWithBundleURL:(id)a0 launchDataProvider:(id)a1 launchScreenSidepack:(id)a2;
- (void)openHowToSupportLink;

@end
