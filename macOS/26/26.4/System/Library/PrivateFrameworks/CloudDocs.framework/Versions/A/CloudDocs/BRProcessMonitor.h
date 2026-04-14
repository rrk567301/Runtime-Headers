@protocol BRProcessMonitorDelegate;

@interface BRProcessMonitor : NSObject {
    id _monitor;
    id<BRProcessMonitorDelegate> _weakObserver;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initForProcessID:(int)a0 observer:(id)a1;

@end
