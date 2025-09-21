@protocol MKSystemControllerOpenURLDelegate;

@interface MKSystemController : NSObject

@property (weak, nonatomic) id<MKSystemControllerOpenURLDelegate> openURLDelegate;

+ (id)sharedInstance;

- (BOOL)reduceMotionEnabled;
- (int)userInterfaceIdiom;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })screenSize;
- (double)screenScale;
- (BOOL)isInternalInstall;
- (void).cxx_destruct;
- (BOOL)openURL:(id)a0;
- (BOOL)isHiDPI;
- (id)_defaultOpenURLOptions;
- (BOOL)_isInSpotlight;
- (BOOL)isGlassEnabled;
- (void)openUserActivity:(id)a0 withApplicationRecord:(id)a1 requireOptionKeyPromptUnlockDevice:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)overrideBlurStyle;
- (void)placeDialRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)requiresRTT;
- (BOOL)shouldCaptureMapViewGestureAnalytics;
- (BOOL)shouldUseDarkAppearanceForAppearance:(id)a0;
- (BOOL)supports3DImagery;
- (BOOL)supports3DMaps;
- (BOOL)supportsExtendedGestures;
- (BOOL)supportsPitchAPI;

@end
