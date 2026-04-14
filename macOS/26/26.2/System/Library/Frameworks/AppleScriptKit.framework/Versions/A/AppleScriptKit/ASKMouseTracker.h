@class NSView;

@interface ASKMouseTracker : NSObject {
    NSView *_view;
    long long _trackingTag;
}

- (void)finalize;
- (id)initWithView:(id)a0;
- (void)dealloc;
- (void)frameChanged:(id)a0;

@end
