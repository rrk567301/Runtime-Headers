@class TLKAuxilliaryTextView;

@interface SearchUIAuxiliaryTextViewController : SearchUIAccessoryViewController

@property (nonatomic) char shouldCenter;
@property (retain) TLKAuxilliaryTextView *view;

+ (char)supportsRowModel:(id)a0;

- (unsigned long long)type;
- (id)setupView;
- (char)shouldVerticallyCenter;
- (void)updateWithRowModel:(id)a0;

@end
