@class IFColor, NSString;

@interface ISCubicInterpolationLinearGradientResource : NSObject <ISScalableCompositorResource>

@property (copy) IFColor *startingColor;
@property (copy) IFColor *endingColor;
@property BOOL usesExternalCompositor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void).cxx_destruct;
- (id)initWithStartingColor:(id)a0 endingColor:(id)a1;

@end
