@interface TLKUtilities : NSObject

+ (BOOL)isSafari;
+ (void)dispatchAsyncIfNecessary:(id /* block */)a0;
+ (void)dispatchAsync:(id /* block */)a0;
+ (BOOL)isSiri;
+ (BOOL)isXROS;
+ (BOOL)isSpotlightUICLI;
+ (BOOL)isIpad;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (BOOL)isHiddenView:(id)a0;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 color:(id)a2;
+ (void)executeBlock:(id /* block */)a0 async:(BOOL)a1;
+ (BOOL)isRenderingForRemoteDevice;
+ (BOOL)isSpotlightApp;
+ (double)appIconCornerRadiusRatio;
+ (BOOL)isWatchOS;
+ (void)performWithoutAnimations:(id /* block */)a0;
+ (BOOL)deviceSupportsRotation;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1;
+ (void)performAnimatableChanges:(id /* block */)a0;
+ (double)standardRoundedCornerRadiusRatio;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
+ (BOOL)isLargePhone;
+ (BOOL)isShortcutsUI;
+ (void)dispatchMainIfNecessary:(id /* block */)a0;
+ (BOOL)isPhone;
+ (double)standardTableCellContentInset;
+ (BOOL)isMacOS;
+ (double)pixelWidthForView:(id)a0;
+ (BOOL)recursivelyCheckIfSubviewTapped:(id)a0 forTappedView:(id)a1;

@end
