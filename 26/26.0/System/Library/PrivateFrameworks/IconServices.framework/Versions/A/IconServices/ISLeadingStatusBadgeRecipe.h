@class NSString;

@interface ISLeadingStatusBadgeRecipe : NSObject <ISCompositorRecipe>

@property long long primaryIconType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)badgedDocumentIconRect;
- (id)badgedFolderIconRect;
- (id)defaultBadgeRect;
- (id)leadingBottomBadgeRect;

@end
