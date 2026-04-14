@class NSObject, NSMutableSet, RBSProcessMonitor;
@protocol OS_dispatch_queue;

@interface CAProcessMonitor : NSObject {
    id /* block */ _callback;
    RBSProcessMonitor *_processMonitor;
    NSMutableSet *_processIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)updateConfiguration;
- (id)initWithCallback:(id /* block */)a0;
- (void)dealloc;
- (void)addMonitoringProcess:(int)a0;
- (void)removeMonitoringProcess:(int)a0;

@end
