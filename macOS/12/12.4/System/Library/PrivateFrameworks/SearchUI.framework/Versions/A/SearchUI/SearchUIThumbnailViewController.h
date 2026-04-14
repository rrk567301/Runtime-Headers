@class SearchUIImageView;

@interface SearchUIThumbnailViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIImageView *view;

+ (BOOL)supportsRowModel:(id)a0;
+ (BOOL)rowModelHasSuggestionThumbnail:(id)a0;

- (unsigned long long)type;
- (id)setupView;
- (void)updateWithRowModel:(id)a0;
- (BOOL)shouldVerticallyCenter;
- (void)applyImageConstraints;
- (void)setUsesCompactWidth:(BOOL)a0;

@end
