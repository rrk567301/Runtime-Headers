@class NSStatusItem;

@interface NSPrivacyIndicatorView : NSView {
    NSStatusItem *_indicatedStatusItem;
}

- (void)viewDidMoveToWindow;
- (void)layout;
- (void).cxx_destruct;
- (void)dealloc;
- (void)renewGState;

@end
