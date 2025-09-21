@class NSButton, NSLayoutConstraint, NSTextField;

@interface LUIPasswordExpirationViewController : LUIPopoverViewController {
    double _days;
}

@property (retain) NSTextField *titleTextField;
@property (retain) NSTextField *expirationTextField;
@property (retain) NSButton *continueButton;
@property (retain) NSButton *changePasswordButton;
@property (retain) NSLayoutConstraint *changeToContinueConstraint;
@property (retain) NSLayoutConstraint *changeToContainerConstraint;

- (BOOL)isTransient;
- (void)dealloc;
- (void)prepareForDisplay;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setChangePasswordButtonTarget:(id)a0 andSelector:(SEL)a1;
- (void)setContinueButtonHidden:(BOOL)a0;
- (void)setContinueButtonTarget:(id)a0 andSelector:(SEL)a1;
- (void)setExpirationDays:(double)a0;

@end
