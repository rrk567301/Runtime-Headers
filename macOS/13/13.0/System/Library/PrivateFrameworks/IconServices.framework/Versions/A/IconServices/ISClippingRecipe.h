@class IFColor, NSString;

@interface ISClippingRecipe : NSObject <ISCompositorRecipe>

@property (retain) IFColor *badgeTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)hintedShadowBlur;
- (id)hintedShadowOffset;
- (id)hintedFontSize;
- (id)hintedBadgeRect;
- (id)hintedTextRect;
- (id)hintedPaperRect;
- (id)hintedPageCurlSize;
- (id)hintedCornerSize;

@end
