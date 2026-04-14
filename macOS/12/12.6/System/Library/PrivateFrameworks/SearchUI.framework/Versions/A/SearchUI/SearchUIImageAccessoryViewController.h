@class SearchUIImageView;

@interface SearchUIImageAccessoryViewController : SearchUIAccessoryViewController

@property (retain) SearchUIImageView *view;

+ (BOOL)supportsRowModel:(id)a0;

- (id)setupView;
- (void)updateWithRowModel:(id)a0;

@end
