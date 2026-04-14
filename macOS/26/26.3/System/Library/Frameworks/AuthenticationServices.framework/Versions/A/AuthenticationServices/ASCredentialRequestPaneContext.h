@class ASCredentialRequestPaneViewController, NSStackView, PMCredentialRequestPaneHeader;

@interface ASCredentialRequestPaneContext : NSObject {
    PMCredentialRequestPaneHeader *_header;
}

@property (readonly, weak, nonatomic) ASCredentialRequestPaneViewController *paneViewController;
@property (readonly, nonatomic) NSStackView *stackView;

- (void).cxx_destruct;
- (void)addEmptyViewWithSpacing:(double)a0;
- (id)initWithPaneViewController:(id)a0 stackView:(id)a1;
- (void)addHeaderWithConfiguration:(id)a0;
- (void)addSubPane:(id)a0 withCustomSpacingAfter:(double)a1;
- (void)updateHeaderWithConfiguration:(id)a0;

@end
