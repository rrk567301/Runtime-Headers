@protocol MKSystemControllerOpenURLDelegate;

@interface MKSystemController : NSObject

@property (weak, nonatomic) id<MKSystemControllerOpenURLDelegate> openURLDelegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)openURL:(id)a0;
- (struct CGSize { double x0; double x1; })screenSize;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isInternalInstall;
- (double)screenScale;
- (BOOL)isHiDPI;
- (int)userInterfaceIdiom;
- (BOOL)supports3DMaps;
- (BOOL)supportsPitchAPI;
- (BOOL)supports3DImagery;
- (BOOL)requiresRTT;
- (BOOL)reduceMotionEnabled;
- (id)_defaultOpenURLOptions;
- (BOOL)_isInSpotlight;
- (void)placeDialRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)openUserActivity:(id)a0 withApplicationRecord:(id)a1 requireOptionKeyPromptUnlockDevice:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)overrideBlurStyle;
- (BOOL)shouldCaptureMapViewGestureAnalytics;
- (BOOL)shouldUseDarkAppearanceForAppearance:(id)a0;

@end
