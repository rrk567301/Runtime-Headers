@class NSStatusItem;

@interface NSPrivacyIndicatorView : NSView {
    NSStatusItem *_indicatedStatusItem;
}

- (void)dealloc;
- (void)layout;
- (void)viewDidMoveToWindow;
- (void).cxx_destruct;
- (void)renewGState;

@end
