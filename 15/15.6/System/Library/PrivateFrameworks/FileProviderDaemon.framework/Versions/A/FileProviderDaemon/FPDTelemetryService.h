@class FPDExtensionManager, NSObject;
@protocol OS_dispatch_queue;

@interface FPDTelemetryService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    char _isExpired;
}

@property (retain, nonatomic) FPDExtensionManager *extensionManager;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)_replaceFPCKTelemetryValuesInTelemetryReport:(id)a0;

@end
