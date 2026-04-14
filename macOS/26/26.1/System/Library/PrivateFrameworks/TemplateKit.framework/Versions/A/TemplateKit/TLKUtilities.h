@interface TLKUtilities : NSObject

+ (BOOL)isIpad;
+ (BOOL)isSafari;
+ (BOOL)isPhone;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 color:(id)a2;
+ (BOOL)isRenderingForRemoteDevice;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
+ (BOOL)isLargePhone;
+ (BOOL)isSpotlightApp;
+ (BOOL)recursivelyCheckIfSubviewTapped:(id)a0 forTappedView:(id)a1;
+ (double)appIconCornerRadiusRatio;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1;
+ (BOOL)isWatchOS;
+ (BOOL)isHiddenView:(id)a0;
+ (BOOL)isSiri;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (void)dispatchMainIfNecessary:(id /* block */)a0;
+ (double)standardRoundedCornerRadiusRatio;
+ (void)dispatchAsyncIfNecessary:(id /* block */)a0;
+ (void)dispatchAsync:(id /* block */)a0;
+ (BOOL)isXROS;
+ (BOOL)deviceSupportsRotation;
+ (void)performAnimatableChanges:(id /* block */)a0;
+ (BOOL)isSpotlightUICLI;
+ (double)standardTableCellContentInset;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1;
+ (BOOL)isShortcutsUI;
+ (BOOL)isMacOS;
+ (void)executeBlock:(id /* block */)a0 async:(BOOL)a1;
+ (double)pixelWidthForView:(id)a0;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (void)performWithoutAnimations:(id /* block */)a0;

@end
