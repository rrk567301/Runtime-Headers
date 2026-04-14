@interface TLKUtilities : NSObject

+ (BOOL)isPhone;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 color:(id)a2;
+ (void)performWithoutAnimations:(id /* block */)a0;
+ (void)dispatchAsync:(id /* block */)a0;
+ (double)standardRoundedCornerRadiusRatio;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1;
+ (BOOL)deviceSupportsRotation;
+ (BOOL)isSpotlightApp;
+ (BOOL)isLargePhone;
+ (BOOL)isSafari;
+ (BOOL)isRenderingForRemoteDevice;
+ (void)performAnimatableChanges:(id /* block */)a0;
+ (BOOL)isSpotlightUICLI;
+ (BOOL)isIpad;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1;
+ (double)standardTableCellContentInset;
+ (BOOL)isHiddenView:(id)a0;
+ (BOOL)recursivelyCheckIfSubviewTapped:(id)a0 forTappedView:(id)a1;
+ (BOOL)isShortcutsUI;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (double)pixelWidthForView:(id)a0;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)isSiri;
+ (double)appIconCornerRadiusRatio;
+ (BOOL)isMacOS;
+ (void)dispatchAsyncIfNecessary:(id /* block */)a0;
+ (BOOL)isXROS;
+ (void)executeBlock:(id /* block */)a0 async:(BOOL)a1;
+ (BOOL)isWatchOS;
+ (void)dispatchMainIfNecessary:(id /* block */)a0;

@end
