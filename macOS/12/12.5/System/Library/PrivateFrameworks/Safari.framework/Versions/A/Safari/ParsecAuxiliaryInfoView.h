@class NSTextField, NSLayoutConstraint, NSStackView, NSColor;

@interface ParsecAuxiliaryInfoView : NSView {
    NSStackView *_labelStackView;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_bottomConstraint;
    long long _backgroundStyle;
}

@property (readonly, nonatomic) NSTextField *primaryLabel;
@property (readonly, nonatomic) NSTextField *topSecondaryLabel;
@property (readonly, nonatomic) NSTextField *bottomSecondaryLabel;
@property (retain, nonatomic) NSColor *bottomSecondaryLabelColor;
@property (nonatomic) long long mode;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setBackgroundStyle:(long long)a0;
- (void)_removePrimaryLabel;
- (void)_removeSecondaryLabels;
- (void)_insertPrimaryLabel;
- (void)_insertSecondaryLabels;
- (void)_reconfigureLabels;
- (BOOL)_shouldShowSecondaryLabels;
- (BOOL)_shouldShowPrimaryLabel;

@end
