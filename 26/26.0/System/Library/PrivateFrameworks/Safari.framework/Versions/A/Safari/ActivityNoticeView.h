@class NSString, NSView, NSLayoutConstraint, NSStackView;
@protocol ActivityNoticeViewDelegate;

@interface ActivityNoticeView : NSView <ActivityNoticeViewProtocol> {
    NSStackView *_containerStackView;
    NSLayoutConstraint *_containerLeadingConstraint;
    NSLayoutConstraint *_containerTrailingConstraint;
}

@property (readonly, copy, nonatomic) NSString *titleText;
@property (readonly, copy, nonatomic) NSString *messageText;
@property (retain, nonatomic) NSView *leadingAccessoryView;
@property (retain, nonatomic) NSView *trailingAccessoryView;
@property (readonly, nonatomic) unsigned long long dismissalMode;
@property (weak, nonatomic) id<ActivityNoticeViewDelegate> delegate;

- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithTitleText:(id)a0 messageText:(id)a1;

@end
