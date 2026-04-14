@class NSString;

@interface ISDocumentRecipe : NSObject <ISCompositorRecipe>

@property BOOL maskBadgeResource;
@property BOOL badgeWithSymbol;
@property unsigned long long platform;
@property BOOL hasText;
@property BOOL hasBespokeBackground;
@property BOOL treatLikeSymbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)iconSpecification;
- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)hintedPaperRect;
- (id)hintedBadgeRect;
- (id)curlResource;
- (id)hintedShadowBlur;
- (id)hintedShadowOffset;
- (id)hintedShadowSpread;
- (id)hintedSymbolFontSize;
- (id)hintedTextFontSize;
- (id)hintedTextRect;
- (id)pageResource;

@end
