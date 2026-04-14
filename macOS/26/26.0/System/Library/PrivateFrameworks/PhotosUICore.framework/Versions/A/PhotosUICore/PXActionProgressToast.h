@class UXView, NSString, NSArray, PXProgrammaticNavigationDestination, NSView, UXLabel, PXToast, NSProgress, UXImageView, NSButton, NSLayoutConstraint;

@interface PXActionProgressToast : UXView <NSProgressReporting> {
    UXView *_leadingView;
    NSView *_progressView;
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
@property (retain, nonatomic) PXProgrammaticNavigationDestination *targetDestination;
@property (nonatomic) long long state;
@property (nonatomic) double bottomSpacing;
@property (readonly) NSProgress *progress;
@property (readonly) BOOL isLocked;
@property (readonly, nonatomic) NSString *localizedProgressText;
@property (copy, nonatomic) NSString *customSubtitleText;
@property (copy, nonatomic) id /* block */ closeButtonAction;
@property (copy, nonatomic) id /* block */ errorButtonAction;
@property (copy, nonatomic) NSArray *errors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAnimated:(BOOL)a0;
- (void)dealloc;
- (void)_cancel;
- (void)_close:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_prepareForReuse;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_determinateProgressView;
- (void)_errorButtonClicked:(id)a0;
- (void)_handleContentModeChange:(id)a0;
- (BOOL)_hasFinalState;
- (void)_showToast;
- (void)_updateDeterminateProgress;
- (void)_updateDisplayForDestination:(id)a0;
- (void)_updateIcons;
- (void)_updatePrimaryLabel;
- (void)_updateSecondaryLabel;
- (void)_updateToastMargin;
- (void)dismissAnimated:(BOOL)a0 afterDelay:(double)a1;
- (void)finishProgressMarkingAsComplete:(BOOL)a0;
- (void)finishProgressMarkingAsComplete:(BOOL)a0 updatedLocalizedTitle:(id)a1 updatedLocalizedDescription:(id)a2;
- (id)initWithTargetDestination:(id)a0 progress:(id)a1;
- (void)setErrors:(id)a0 forMediaType:(long long)a1;
- (void)setLocalizedProgressText:(id)a0;
- (void)willStartProgress;

@end
