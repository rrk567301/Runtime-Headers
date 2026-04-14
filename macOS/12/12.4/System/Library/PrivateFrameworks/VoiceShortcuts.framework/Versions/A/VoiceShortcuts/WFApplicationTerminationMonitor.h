@class NSString, RBSProcessMonitor;

@interface WFApplicationTerminationMonitor : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) RBSProcessMonitor *processMonitor;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)startMonitoringWithTerminationHandler:(id /* block */)a0;

@end
