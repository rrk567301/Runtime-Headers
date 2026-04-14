@class NSTextField, NSProgressIndicator, NSTimer, ConfigurableVibrancyButton, NSTrackingArea, NSStackView, DownloadProgressEntry, NSImageView;

@interface DownloadTableCellView : NSTableCellView {
    NSStackView *_mainStackView;
    NSStackView *_textStackView;
    NSImageView *_iconImageView;
    NSTextField *_filenameTextField;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_statusTextField;
    ConfigurableVibrancyButton *_stopResumeButton;
    ConfigurableVibrancyButton *_revealButton;
    NSTrackingArea *_stopResumeTrackingArea;
    NSTrackingArea *_revealTrackingArea;
    NSTimer *_progressTimer;
    long long _buttonState;
}

@property (readonly, nonatomic) DownloadProgressEntry *entry;
@property (readonly, nonatomic) double bestWidth;

+ (double)rowHeight;

- (void)viewWillMoveToWindow:(id)a0;
- (void)_updateButtons;
- (id)accessibilityRole;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)a0;
- (BOOL)isAccessibilityElement;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityChildren;
- (id)accessibilityContents;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRoleDescription;
- (BOOL)open:(id)a0;
- (void)_updateTextColor;
- (id)initWithEntry:(id)a0;
- (id)_openHelpString;
- (void)_startProgressAnimationIfNeeded;
- (id)_errorSummary;
- (id)_rateString;
- (void)_reveal:(id)a0;
- (id)_revealHelpString;
- (void)_startDiskCopyAnimation;
- (void)_startProgressAnimation;
- (long long)_stateForTrackingArea:(id)a0;
- (id)_statusAndRateText;
- (id)_statusAndTimeRemainingText;
- (id)_statusText;
- (void)_stopProgressAnimation;
- (void)_stopProgressAnimationTimer;
- (void)_stopResume:(id)a0;
- (id)_stopResumeAccessibilityDescription;
- (id)_stopResumeHelpString;
- (id)_timeRemainingString;
- (void)_updateConstraintsForCurrentState;
- (void)_updateIconAndFilename;
- (void)_updateProgressAnimation;
- (void)_updateStatusField;
- (void)currentFileDidChange;
- (id)displayableFileType;
- (void)progressDidChange;
- (void)stageDidChange;

@end
