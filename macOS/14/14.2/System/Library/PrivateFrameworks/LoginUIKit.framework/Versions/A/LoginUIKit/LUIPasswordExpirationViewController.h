@class NSButton, NSLayoutConstraint, NSTextField;

@interface LUIPasswordExpirationViewController : LUIPopoverViewController {
    double _days;
}

@property NSTextField *titleTextField;
@property NSTextField *expirationTextField;
@property NSButton *continueButton;
@property NSButton *changePasswordButton;
@property (retain) NSLayoutConstraint *changeToContinueConstraint;
@property (retain) NSLayoutConstraint *changeToContainerConstraint;

- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)isTransient;
- (void)prepareForDisplay;
- (void)_layoutContentView;
- (void)setChangePasswordButtonTarget:(id)a0 andSelector:(SEL)a1;
- (void)setContinueButtonHidden:(BOOL)a0;
- (void)setContinueButtonTarget:(id)a0 andSelector:(SEL)a1;
- (void)setExpirationDays:(double)a0;

@end
