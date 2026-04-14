@class NSView;

@interface ASKMouseTracker : NSObject {
    NSView *_view;
    long long _trackingTag;
}

- (id)initWithView:(id)a0;
- (void)finalize;
- (void)dealloc;
- (void)frameChanged:(id)a0;

@end
