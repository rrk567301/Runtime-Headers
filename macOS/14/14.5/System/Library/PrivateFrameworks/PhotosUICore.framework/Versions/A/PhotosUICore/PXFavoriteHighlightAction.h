@class PHPhotosHighlight, PHObjectPlaceholder;

@interface PXFavoriteHighlightAction : PXPhotosAction

@property (readonly, nonatomic) PHPhotosHighlight *originalHighlight;
@property (readonly, nonatomic) BOOL favorite;
@property (retain, nonatomic) PHObjectPlaceholder *adaptiveHighlightPlaceholder;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithHighlight:(id)a0 favorite:(BOOL)a1;

@end
