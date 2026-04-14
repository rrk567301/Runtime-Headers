@class SearchUIImage;

@interface SearchUIImageButton : NSButton

@property (retain, nonatomic) SearchUIImage *unselectedImage;
@property (retain, nonatomic) SearchUIImage *selectedImage;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)tlk_updateForAppearance:(id)a0;

@end
