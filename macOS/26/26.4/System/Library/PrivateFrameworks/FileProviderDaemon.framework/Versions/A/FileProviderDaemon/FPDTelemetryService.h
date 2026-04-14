@class FPDExtensionManager, NSObject;
@protocol OS_dispatch_queue;

@interface FPDTelemetryService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isExpired;
}

@property (retain, nonatomic) FPDExtensionManager *extensionManager;

- (void)_gatherAndReportTelemetryWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)gatherAndReportTelemetryWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)start;

@end
