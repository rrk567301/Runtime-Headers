@interface TLKUtilities : NSObject

+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1;
+ (void)dispatchMainIfNecessary:(id /* block */)a0;
+ (void)executeBlock:(id /* block */)a0 async:(BOOL)a1;
+ (double)onePixelForCurrentScreenResolution;
+ (double)appIconCornerRadiusRatio;
+ (BOOL)isMacOS;
+ (BOOL)isHiddenView:(id)a0;
+ (void)dispatchAsyncIfNecessary:(id /* block */)a0;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 color:(id)a2;
+ (BOOL)recursivelyCheckIfSubviewTapped:(id)a0 forTappedView:(id)a1;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (double)standardTableCellContentInset;
+ (BOOL)deviceSupportsRotation;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
+ (void)performAnimatableChanges:(id /* block */)a0;
+ (void)performWithoutAnimations:(id /* block */)a0;

@end
