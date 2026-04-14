@class NSTextField, NSTimer, NSProgressIndicator, NSImage, DownloadProgressEntry, ConfigurableVibrancyButton;

@interface DownloadTableCellView : NSTableCellView {
    NSProgressIndicator *_progressIndicator;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _iconFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _filenameFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _statusFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _revealFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _stopResumeFrame;
    DownloadProgressEntry *_entry;
    NSTimer *_progressTimer;
    int _buttonState;
    NSTextField *_filenameTextField;
    NSTextField *_statusTextField;
    NSImage *_iconImage;
    long long _revealTrackingRectTag;
    long long _stopResumeTrackingRectTag;
    ConfigurableVibrancyButton *_stopResumeButton;
    ConfigurableVibrancyButton *_revealButton;
}

+ (double)rowHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)open:(id)a0;
- (BOOL)isFlipped;
- (void)viewDidMoveToWindow;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityRoleDescription;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_statusText;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityContents;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_removeTrackingRects;
- (void)_updateButtons;
- (void)_updateTrackingRects;
- (id)_enclosingTableView;
- (id)entry;
- (void)_updateTextColor;
- (id)initWithEntry:(id)a0;
- (void)_updateButtonStateAndStatusField;
- (void)_stopResume:(id)a0;
- (void)_reveal:(id)a0;
- (void)stageDidChange;
- (void)currentFileDidChange;
- (void)progressDidChange;
- (void)_updateIconAndFilename;
- (void)_updateStatusField;
- (void)_updateFrames;
- (void)_drawIcon:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateProgressAnimation;
- (void)_startProgressAnimation;
- (void)_stopProgressAnimationTimer;
- (id)_rateString;
- (id)_timeRemainingString;
- (id)_stopResumeHelpString;
- (id)_revealHelpString;
- (id)_statusAndRateText;
- (id)displayableFileType;
- (id)_errorSummary;
- (id)_statusAndTimeRemainingText;
- (void)_stopProgressAnimation;
- (void)_startDiskCopyAnimation;
- (void)_startProgressAnimationIfNeeded;
- (id)_stopResumeAccessibilityDescription;
- (id)_openHelpString;
- (double)bestWidth;

@end
