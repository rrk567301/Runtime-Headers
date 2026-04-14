@class NSTextField, NSString, NSView, NSProgressIndicator, NSImageView, CNAvatarViewController, NSWindow;
@protocol SSConnectionProgressViewControllerDelegate;

@interface SSConnectionProgressViewController : NSViewController {
    long long mPercentComplete;
}

@property NSProgressIndicator *mProgressIndicator;
@property NSTextField *mDisplayText;
@property id<SSConnectionProgressViewControllerDelegate> delegate;
@property (retain) NSWindow *parentWindow;
@property BOOL indeterminateProgress;
@property long long percentageComplete;
@property (retain) NSString *displayText;
@property (retain) CNAvatarViewController *avatarViewController;
@property (retain) NSView *viewContainer;
@property (retain) NSImageView *yosemiteStaticImage;

+ (id)stubContact;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setAppleID:(id)a0;
- (void)dealloc;
- (void)awakeFromNib;
- (void)startProgressAnimation;
- (void)stopProgressAnimation;
- (long long)percentageComplete;
- (void)setPercentageComplete:(long long)a0;
- (void)setCNContact:(id)a0;
- (void)stopClicked:(id)a0;

@end
