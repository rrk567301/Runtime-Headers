@class PHPhotosHighlight, PHObjectPlaceholder;
@protocol PXFastEnumeration;

@interface PXHideAssetsFromHighlightAction : PXPhotosAction

@property (readonly, nonatomic) id<PXFastEnumeration> redoHiddenAssets;
@property (readonly, nonatomic) id<PXFastEnumeration> undoHiddenAssets;
@property (readonly, nonatomic) PHPhotosHighlight *highlight;
@property (retain, nonatomic) PHObjectPlaceholder *adaptiveHighlightPlaceholder;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithAssets:(id)a0 highlight:(id)a1;

@end
