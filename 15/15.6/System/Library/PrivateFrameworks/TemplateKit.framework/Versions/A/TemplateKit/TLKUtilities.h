@interface TLKUtilities : NSObject

+ (char)isSafari;
+ (char)isWatchOS;
+ (char)isXROS;
+ (char)isSiri;
+ (char)isPhone;
+ (char)isIpad;
+ (void)dispatchAsync:(id /* block */)a0;
+ (char)isMacOS;
+ (double)appIconCornerRadiusRatio;
+ (char)deviceSupportsRotation;
+ (void)dispatchAsyncIfNecessary:(id /* block */)a0;
+ (void)dispatchMainIfNecessary:(id /* block */)a0;
+ (void)executeBlock:(id /* block */)a0 async:(char)a1;
+ (char)isHiddenView:(id)a0;
+ (char)isLargePhone;
+ (char)isShortcutsUI;
+ (char)isSpotlightApp;
+ (void)performAnimatableChanges:(id /* block */)a0;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(char)a1;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(char)a1 completion:(id /* block */)a2;
+ (void)performWithoutAnimations:(id /* block */)a0;
+ (double)pixelWidthForView:(id)a0;
+ (char)recursivelyCheckIfSubviewTapped:(id)a0 forTappedView:(id)a1;
+ (double)standardRoundedCornerRadiusRatio;
+ (double)standardTableCellContentInset;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 color:(id)a2;

@end
