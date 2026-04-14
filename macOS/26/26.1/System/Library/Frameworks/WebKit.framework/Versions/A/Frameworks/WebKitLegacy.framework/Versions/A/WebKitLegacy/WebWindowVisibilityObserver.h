@class WebView;

@interface WebWindowVisibilityObserver : NSObject {
    WebView *_view;
}

- (void)startObserving:(id)a0;
- (void)stopObserving:(id)a0;
- (id)initWithView:(id)a0;
- (void)_windowVisibilityChanged:(id)a0;

@end
