@class UXView, NSString, NSArray, PXProgrammaticNavigationDestination, UXLabel, PXToast, NSProgress, NSButton, UXImageView, NSLayoutConstraint;

@interface PXActionProgressToast : UXView <NSProgressReporting> {
    UXView *_leadingView;
    UXView *_progressView;
    UXImageView *_checkmarkView;
    NSButton *_errorView;
    NSButton *_closeButton;
    UXView *_labelContainer;
    UXLabel *_primaryLabel;
    UXLabel *_secondaryLabel;
    PXToast *_toast;
    double _toastMargin;
    NSLayoutConstraint *_labelContainerWidthConstraint;
    NSLayoutConstraint *_closeButtonWidthConstraint;
    NSLayoutConstraint *_trailingSpacingConstraint;
    NSLayoutConstraint *_primaryLabelWidthConstraint;
    NSLayoutConstraint *_secondaryLabelWidthConstraint;
    NSLayoutConstraint *_primaryLabelAlignmentConstraint;
    NSLayoutConstraint *_secondaryLabelAlignmentConstraint;
}

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedProgressText;
@property (retain, nonatomic) PXProgrammaticNavigationDestination *targetDestination;
@property (nonatomic) long long state;
@property (nonatomic) double bottomSpacing;
@property (readonly) NSProgress *progress;
@property (readonly) BOOL isLocked;
@property (copy, nonatomic) id /* block */ closeButtonAction;
@property (copy, nonatomic) id /* block */ errorButtonAction;
@property (copy, nonatomic) NSArray *errors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateConstraints;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_close:(id)a0;
- (void)_cancel;
- (void)_prepareForReuse;
- (void)_handleContentModeChange:(id)a0;
- (void)_errorButtonClicked:(id)a0;
- (id)initWithTargetDestination:(id)a0 progress:(id)a1;
- (void)willStartProgress;
- (id)_determinateProgressView;
- (void)_updateDeterminateProgress;
- (void)_showToast;
- (void)_dismissAnimated:(BOOL)a0 afterDelay:(double)a1;
- (void)_dismissAnimated:(BOOL)a0;
- (void)setErrors:(id)a0 forMediaType:(long long)a1;
- (void)finishProgressMarkingAsComplete:(BOOL)a0;
- (void)finishProgressMarkingAsComplete:(BOOL)a0 updatedLocalizedTitle:(id)a1 updatedLocalizedDescription:(id)a2;
- (BOOL)_hasFinalState;
- (void)_updatePrimaryLabel;
- (void)_updateSecondaryLabel;
- (void)_updateToastMargin;
- (void)_updateIcons;
- (void)_updateDisplayForDestination:(id)a0;

@end
