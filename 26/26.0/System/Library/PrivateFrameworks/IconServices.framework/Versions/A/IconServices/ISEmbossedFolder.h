@class NSString;

@interface ISEmbossedFolder : NSObject <ISCompositorRecipe>

@property unsigned long long backgroundStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)hintedBadgeRect;
- (unsigned long long)embossVariant;
- (id)folderResourceName;
- (id)hintedFontSize;
- (id)hintedImageBadgeRect;

@end
