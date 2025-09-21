@class SearchUILabel;

@interface SearchUILeadingEncapsulatedTextViewController : SearchUILeadingViewController

@property (retain) SearchUILabel *view;

+ (char)supportsRowModel:(id)a0;

- (id)setupView;
- (char)shouldCenterAlignToTitle;
- (void)updateWithRowModel:(id)a0;

@end
