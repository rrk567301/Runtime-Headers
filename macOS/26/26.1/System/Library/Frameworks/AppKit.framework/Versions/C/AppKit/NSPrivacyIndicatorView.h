@class NSStatusItem;

@interface NSPrivacyIndicatorView : NSView {
    NSStatusItem *_indicatedStatusItem;
}

- (void)layout;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (void).cxx_destruct;
- (void)renewGState;

@end
