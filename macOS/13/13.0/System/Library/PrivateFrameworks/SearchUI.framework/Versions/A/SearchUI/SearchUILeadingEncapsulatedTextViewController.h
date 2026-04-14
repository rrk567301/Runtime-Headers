@class SearchUILabel;

@interface SearchUILeadingEncapsulatedTextViewController : SearchUILeadingViewController

@property (retain) SearchUILabel *view;

+ (BOOL)supportsRowModel:(id)a0;

- (id)setupView;
- (void)updateWithRowModel:(id)a0;
- (BOOL)shouldCenterAlignToTitle;

@end
