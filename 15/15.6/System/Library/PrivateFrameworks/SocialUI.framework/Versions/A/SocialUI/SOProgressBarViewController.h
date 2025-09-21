@class NSView, NSLayoutConstraint;

@interface SOProgressBarViewController : NSObject

@property (retain) NSView *sendingView;
@property (retain) NSView *progressBarView;
@property (retain) NSLayoutConstraint *progressBarViewWidthConstraint;
@property (nonatomic, getter=isIMessageable) char iMessageable;
@property (nonatomic, getter=isBusinessConversation) char businessConversation;

- (void).cxx_destruct;
- (void)finish;
- (void)awakeFromNib;
- (void)setup;
- (void)_fadeOutSendingView;
- (void)_finishProgressBar;
- (void)_finishSendingView;
- (void)_resetProgressBar;
- (void)_resetProgressBarColor;
- (double)_sendingViewWidth;
- (void)_setProgressValue:(double)a0 oldProgress:(double)a1 animate:(char)a2;
- (void)_setupProgressBar;
- (void)_setupSendingView;
- (void)_updateProgressBarConstraintWithMultiplier:(double)a0;
- (void)setProgressValue:(double)a0 oldProgress:(double)a1 sending:(unsigned long long)a2 total:(unsigned long long)a3 animate:(char)a4;

@end
