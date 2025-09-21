@interface ABThrottledTrackingAreaMonitor : NSObject {
    id /* block */ _updateHandler;
}

@property (nonatomic, getter=isMouseInTrackingArea) BOOL mouseInTrackingArea;

- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (void)resendUpdate;
- (void)sendUpdate:(id)a0;

@end
