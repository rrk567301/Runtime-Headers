@class ASCredentialRequestPaneViewController, NSStackView;

@interface ASCredentialRequestPaneContext : NSObject

@property (readonly, weak, nonatomic) ASCredentialRequestPaneViewController *paneViewController;
@property (readonly, nonatomic) NSStackView *stackView;

- (void).cxx_destruct;
- (id)initWithPaneViewController:(id)a0 stackView:(id)a1;
- (void)addEmptyViewWithSpacing:(double)a0;
- (void)addSubPane:(id)a0 withCustomSpacingAfter:(double)a1;

@end
