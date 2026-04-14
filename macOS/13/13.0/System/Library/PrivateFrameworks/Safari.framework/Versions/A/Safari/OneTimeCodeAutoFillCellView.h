@class NSTextField, NSView, SFAutoFillOneTimeCode, NSLayoutConstraint;

@interface OneTimeCodeAutoFillCellView : ColorInvertingTableCellView {
    NSView *_iconView;
    NSTextField *_primaryLabelTextField;
    NSTextField *_secondaryLabelTextField;
    NSLayoutConstraint *_iconViewWidthContstraint;
}

@property (retain, nonatomic) SFAutoFillOneTimeCode *oneTimeCode;

+ (struct CGSize { double x0; double x1; })sizeWithOneTimeCode:(id)a0;

- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (void)awakeFromNib;
- (void)setBackgroundStyle:(long long)a0;
- (void)configureWithOneTimeCode:(id)a0 formURL:(id)a1;
- (void)_updateMessagesColor;

@end
