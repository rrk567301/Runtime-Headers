@class NSString, NSTextField;

@interface UINSOnboardingTextView : NSView {
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
}

@property (retain, nonatomic) NSString *onboardingTitle;
@property (retain, nonatomic) NSString *onboardingDescription;
@property (nonatomic) BOOL isRightAligned;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 description:(id)a1;
- (void)_setupLabels;

@end
