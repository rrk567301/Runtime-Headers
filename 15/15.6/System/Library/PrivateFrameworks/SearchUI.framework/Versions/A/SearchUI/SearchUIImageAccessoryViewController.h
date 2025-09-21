@class SearchUIImageView;

@interface SearchUIImageAccessoryViewController : SearchUIAccessoryViewController

@property (retain) SearchUIImageView *view;

+ (char)resultIsLegacySiriAction:(id)a0;
+ (char)supportsRowModel:(id)a0;

- (unsigned long long)type;
- (id)setupView;
- (char)containsSymbolImage;
- (void)updateWithRowModel:(id)a0;

@end
