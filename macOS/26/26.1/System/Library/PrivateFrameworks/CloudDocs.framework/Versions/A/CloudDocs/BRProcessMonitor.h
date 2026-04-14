@protocol BRProcessMonitorDelegate;

@interface BRProcessMonitor : NSObject {
    id _monitor;
    id<BRProcessMonitorDelegate> _weakObserver;
}

- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initForProcessID:(int)a0 observer:(id)a1;

@end
