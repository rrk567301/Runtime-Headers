@class NSString, NSArray, TLKLabel;

@interface SearchUITruncatingListLabel : NSView

@property (retain, nonatomic) NSString *caption;
@property (retain, nonatomic) NSArray *list;
@property (retain, nonatomic) TLKLabel *label;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)text;
- (long long)numberOfLines;
- (id)viewForFirstBaselineLayout;
- (void)updateCaption:(id)a0 list:(id)a1;
- (void)updateLabelForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canFitString:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;

@end
