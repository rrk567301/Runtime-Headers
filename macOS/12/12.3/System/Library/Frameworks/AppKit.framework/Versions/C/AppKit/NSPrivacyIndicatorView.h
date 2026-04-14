@class NSStatusItem;

@interface NSPrivacyIndicatorView : NSView {
    NSStatusItem *_indicatedStatusItem;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)renewGState;

@end
