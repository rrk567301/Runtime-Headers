@class NSCGSWindowLayerSurface, NSView, NSArray, NSWindow;

@interface _NSViewLayerSurface : NSObject {
    NSView *_view;
    NSWindow *_window;
    NSCGSWindowLayerSurface *_surface;
    unsigned long long _viewGeometryObserver;
    NSArray *_windowObservers;
}

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)update;
- (id)initWithView:(id)a0;

@end
