@class NSTextField, PXGadgetSectionHeader, NSView, NSString, NSLayoutConstraint, NSButton, NSAttributedString;

@interface PXGadgetSectionHeaderNSView : NSView <PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (readonly, nonatomic) NSAttributedString *attributedButtonTitle;
@property (readonly, nonatomic) BOOL buttonHasImage;
@property (retain, nonatomic) NSTextField *titleTextField;
@property (retain, nonatomic) NSButton *accessoryButton;
@property (retain, nonatomic) NSView *divider;
@property (retain, nonatomic) NSLayoutConstraint *textFieldLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textFieldBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *dividerTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *dividerLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *dividerTrailingConstraint;
@property (retain, nonatomic) PXGadgetSectionHeader *headerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)_updateTitleIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_buttonClicked;
- (void)_initializeConstraints;
- (void)_updateButtonIfNeeded;
- (void)_updateConstraintsIfNeeded;
- (void)_updateDividerIfNeeded;

@end
