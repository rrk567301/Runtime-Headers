@class SearchUIImageView;

@interface SearchUIThumbnailViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIImageView *view;

+ (char)rowModelHasSuggestionThumbnail:(id)a0;
+ (void)applyImageConstraintsToImageView:(id)a0 isCompact:(char)a1 preventThumbnailScaling:(char)a2 usesCompactWidth:(char)a3;
+ (id)compactSymbolFont;
+ (long long)compactSymbolScale;
+ (char)supportsRowModel:(id)a0;

- (unsigned long long)type;
- (id)setupView;
- (void)tlk_updateForAppearance:(id)a0;
- (id)imageForRowModel:(id)a0 appearance:(id)a1;
- (void)setUsesCompactWidth:(char)a0;
- (char)shouldVerticallyCenter;
- (void)updateWithRowModel:(id)a0;

@end
