@interface TLKUtilities : NSObject

+ (void)dispatchAsyncIfNecessary:(id /* block */)a0;
+ (void)dispatchMainIfNecessary:(id /* block */)a0;
+ (void)executeBlock:(id /* block */)a0 async:(BOOL)a1;
+ (double)standardTableCellContentInset;
+ (BOOL)deviceSupportsRotation;
+ (double)onePixelForCurrentScreenResolution;
+ (double)appIconCornerRadiusRatio;
+ (double)standardRoundedCornerRadiusRatio;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 color:(id)a2;
+ (BOOL)recursivelyCheckIfSubviewTapped:(id)a0 forTappedView:(id)a1;
+ (void)performAnimatableChanges:(id /* block */)a0;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (void)performWithoutAnimations:(id /* block */)a0;
+ (BOOL)isMacOS;
+ (BOOL)isHiddenView:(id)a0;

@end
