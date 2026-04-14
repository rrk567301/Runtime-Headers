@interface TLKUtilities : NSObject

+ (BOOL)isSafari;
+ (void)dispatchAsync:(id /* block */)a0;
+ (void)performWithoutAnimations:(id /* block */)a0;
+ (void)dispatchAsyncIfNecessary:(id /* block */)a0;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1;
+ (BOOL)deviceSupportsRotation;
+ (BOOL)isShortcutsUI;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 color:(id)a2;
+ (BOOL)isMacOS;
+ (double)appIconCornerRadiusRatio;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (void)dispatchMainIfNecessary:(id /* block */)a0;
+ (BOOL)isSpotlightUICLI;
+ (BOOL)isSpotlightApp;
+ (BOOL)isVisionOS;
+ (BOOL)isLargePhone;
+ (BOOL)recursivelyCheckIfSubviewTapped:(id)a0 forTappedView:(id)a1;
+ (void)performAnimatableChanges:(id /* block */)a0;
+ (BOOL)isWatchOS;
+ (double)standardTableCellContentInset;
+ (BOOL)isHiddenView:(id)a0;
+ (double)pixelWidthForView:(id)a0;
+ (BOOL)isIpad;
+ (BOOL)isSiri;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
+ (BOOL)isPhone;
+ (BOOL)isRenderingForRemoteDevice;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (double)standardRoundedCornerRadiusRatio;
+ (void)executeBlock:(id /* block */)a0 async:(BOOL)a1;

@end
