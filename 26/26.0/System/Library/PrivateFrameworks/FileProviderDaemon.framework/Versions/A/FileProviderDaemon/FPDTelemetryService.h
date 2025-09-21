@class FPDExtensionManager, NSObject;
@protocol OS_dispatch_queue;

@interface FPDTelemetryService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isExpired;
}

@property (retain, nonatomic) FPDExtensionManager *extensionManager;

- (void)start;
- (id)init;
- (void)_replaceFPCKTelemetryValuesInTelemetryReport:(id)a0;
- (void).cxx_destruct;

@end
