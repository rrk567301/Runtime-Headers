@interface TLKUtilities : NSObject

+ (BOOL)isMacOS;
+ (void)executeBlock:(id /* block */)a0 async:(BOOL)a1;
+ (void)performAnimatableChanges:(id /* block */)a0;
+ (BOOL)isSafari;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1;
+ (void)dispatchAsyncIfNecessary:(id /* block */)a0;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 color:(id)a2;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (double)appIconCornerRadiusRatio;
+ (BOOL)isSpotlightUICLI;
+ (void)performWithoutAnimations:(id /* block */)a0;
+ (BOOL)isWatchOS;
+ (BOOL)isSiri;
+ (BOOL)isRenderingForRemoteDevice;
+ (double)standardRoundedCornerRadiusRatio;
+ (BOOL)isXROS;
+ (BOOL)isSpotlightApp;
+ (void)dispatchMainIfNecessary:(id /* block */)a0;
+ (BOOL)isShortcutsUI;
+ (BOOL)recursivelyCheckIfSubviewTapped:(id)a0 forTappedView:(id)a1;
+ (BOOL)isIpad;
+ (double)pixelWidthForView:(id)a0;
+ (void)dispatchAsync:(id /* block */)a0;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (BOOL)isPhone;
+ (double)standardTableCellContentInset;
+ (BOOL)deviceSupportsRotation;
+ (BOOL)isLargePhone;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1;
+ (BOOL)isHiddenView:(id)a0;

@end
