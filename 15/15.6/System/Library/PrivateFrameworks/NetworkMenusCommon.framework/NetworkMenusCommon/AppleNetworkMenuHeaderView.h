@class NSNumber, NSTimer, NSTextField;

@interface AppleNetworkMenuHeaderView : NSView {
    NSTextField *o_titleField;
    NSTextField *o_timeField;
    NSNumber *mConnectionStartTime;
    double mSleepStartTime;
    long long mSleepTimeAdditionalSeconds;
    NSTimer *mConnectedTimer;
    NSTimer *mClickFlashTimer;
    char mHasClicked;
    char mIsHighlighted;
    char mShouldShowTimer;
}

- (void)setEnabled:(char)a0;
- (void)setTitle:(id)a0;
- (void)setWidth:(double)a0;
- (id)title;
- (void)setTime:(id)a0;
- (char)acceptsFirstMouse:(id)a0;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (void)viewWillMoveToWindow:(id)a0;
- (long long)elapsedTime;
- (void)setShouldShowTimer:(char)a0;
- (id)timeString;
- (void)updateTime;
- (void)setConnectionStartTime:(id)a0;
- (double)desiredWidth;
- (void)drawHighlighted:(char)a0;
- (void)startConnectedTimer;
- (void)stopConnectedTimer;

@end
