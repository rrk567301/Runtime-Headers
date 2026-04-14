@class NSCGSWindowLayerSurface, NSView, NSArray, NSWindow;
@protocol NSObject;

@interface _NSViewLayerSurface : NSObject {
    NSView *_view;
    NSWindow *_window;
    NSCGSWindowLayerSurface *_surface;
    id<NSObject> _viewGeometryObserver;
    NSArray *_windowObservers;
}

- (void)invalidate;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)update;
- (void)dealloc;

@end
