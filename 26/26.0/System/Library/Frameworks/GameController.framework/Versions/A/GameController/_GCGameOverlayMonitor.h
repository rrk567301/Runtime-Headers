@class NSMutableSet;

@interface _GCGameOverlayMonitor : NSObject {
    NSMutableSet *_observers;
    _Atomic BOOL _overlayPresented;
    int _overlayPresentationObserver;
    unsigned long long _state;
    struct { unsigned long long overlayPresentationChangedCount; } stats;
}

@property (class, readonly) BOOL currentProcessIsOverlayUI;

@property (readonly, getter=isOverlayPresented) BOOL overlayPresented;

+ (id)sharedInstance;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 notifyCurrent:(BOOL)a1;
- (void)setOverlayPresented:(BOOL)a0;

@end
