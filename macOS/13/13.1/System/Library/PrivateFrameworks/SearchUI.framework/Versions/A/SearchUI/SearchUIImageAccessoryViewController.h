@class SearchUIImageView;

@interface SearchUIImageAccessoryViewController : SearchUIAccessoryViewController

@property (retain) SearchUIImageView *view;

+ (BOOL)supportsRowModel:(id)a0;
+ (BOOL)resultIsLegacySiriAction:(id)a0;

- (unsigned long long)type;
- (id)setupView;
- (void)updateWithRowModel:(id)a0;
- (BOOL)containsSymbolImage;

@end
