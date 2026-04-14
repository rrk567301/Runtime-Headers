@class NSString;

@interface _TabGroupPickerToolbarButtonCell : NSPopUpButtonCell

@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *symbolImageName;

- (id)accessibilityLabel;
- (id)_paragraphStyle;
- (void).cxx_destruct;
- (void)drawImageWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawTitleWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)_attributedMainTitle;
- (id)_attributedSubtitle;
- (void)_updateAttributedTitleIfNeeded;

@end
