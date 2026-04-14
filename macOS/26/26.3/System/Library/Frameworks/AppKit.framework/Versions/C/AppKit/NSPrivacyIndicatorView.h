@class NSStatusItem;

@interface NSPrivacyIndicatorView : NSView {
    NSStatusItem *_indicatedStatusItem;
}

- (void)layout;
- (void)viewDidMoveToWindow;
- (void).cxx_destruct;
- (void)dealloc;
- (void)renewGState;

@end
