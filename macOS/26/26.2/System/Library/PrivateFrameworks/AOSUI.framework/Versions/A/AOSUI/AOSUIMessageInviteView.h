@class NSTextField, NSString, NSView, NSStackView, AOSUICircularImageView;

@interface AOSUIMessageInviteView : NSView

@property (retain, nonatomic) NSView *bubbleView;
@property (retain, nonatomic) AOSUICircularImageView *imageView;
@property (retain, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) NSStackView *verticalStackView;
@property (retain, nonatomic) NSTextField *bubbleLabel;
@property (retain, nonatomic) NSString *bubbleText;
@property long long stackAlignment;

- (id)initWithText:(id)a0;
- (void).cxx_destruct;
- (void)_setupContentViewWithBubbleText:(id)a0;

@end
