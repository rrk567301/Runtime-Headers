@class NSLayoutConstraint, NSTimer, NSTextField;

@interface SORecognitionTextBalloonController : NSWindowController {
    NSTextField *_textField;
    NSLayoutConstraint *_textFieldWidthLayoutConstraint;
    NSTimer *_autoCloseTimer;
    struct CGPoint { double x; double y; } _centerPoint;
    double _maximumTextFieldWidth;
    char _drawDownward;
    char _isClosingBubbleWindow;
    long long _mostRecentMessageType;
}

+ (id)sharedRecognitionTextBalloonController;

- (void)dealloc;
- (void)awakeFromNib;
- (void)hideBalloonUsingFastTransition:(char)a0;
- (double)_durationToDisplayMessageString:(id)a0;
- (struct CGPoint { double x0; double x1; })_offsetAfterNudgingWindowOntoScreenWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustBalloonToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)autoCloseNow;
- (void)showBalloonCenteredAtPoint:(struct CGPoint { double x0; double x1; })a0 withString:(id)a1 messageType:(long long)a2 drawDownward:(char)a3 resetAutoDismissTimer:(char)a4;

@end
