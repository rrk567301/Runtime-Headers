@protocol MKSystemControllerOpenURLDelegate;

@interface MKSystemController : NSObject

@property (weak, nonatomic) id<MKSystemControllerOpenURLDelegate> openURLDelegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (char)openURL:(id)a0;
- (struct CGSize { double x0; double x1; })screenSize;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (char)isInternalInstall;
- (double)screenScale;
- (char)isHiDPI;
- (id)_defaultOpenURLOptions;
- (char)_isInSpotlight;
- (void)openUserActivity:(id)a0 withApplicationRecord:(id)a1 requireOptionKeyPromptUnlockDevice:(char)a2 completionHandler:(id /* block */)a3;
- (char)overrideBlurStyle;
- (void)placeDialRequest:(id)a0 completionHandler:(id /* block */)a1;
- (char)reduceMotionEnabled;
- (char)requiresRTT;
- (char)shouldCaptureMapViewGestureAnalytics;
- (char)shouldUseDarkAppearanceForAppearance:(id)a0;
- (char)supports3DImagery;
- (char)supports3DMaps;
- (char)supportsExtendedGestures;
- (char)supportsPitchAPI;
- (int)userInterfaceIdiom;

@end
