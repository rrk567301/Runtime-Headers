@class NSView;

@interface ASKMouseTracker : NSObject {
    NSView *_view;
    long long _trackingTag;
}

- (void)finalize;
- (void)dealloc;
- (id)initWithView:(id)a0;
- (void)frameChanged:(id)a0;

@end
