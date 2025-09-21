@protocol BRProcessMonitorDelegate;

@interface BRProcessMonitor : NSObject {
    id _monitor;
    id<BRProcessMonitorDelegate> _weakObserver;
}

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initForProcessID:(int)a0 observer:(id)a1;

@end
