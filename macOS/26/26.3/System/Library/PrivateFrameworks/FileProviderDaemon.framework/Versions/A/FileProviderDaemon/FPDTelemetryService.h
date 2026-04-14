@class FPDExtensionManager, NSObject;
@protocol OS_dispatch_queue;

@interface FPDTelemetryService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isExpired;
}

@property (retain, nonatomic) FPDExtensionManager *extensionManager;

- (void)start;
- (id)init;
- (void).cxx_destruct;
- (void)transformTimeIntoRelativeAgeOnReport:(id)a0 from:(id)a1 to:(id)a2;
- (void)_replaceFPCKTelemetryValuesInTelemetryReport:(id)a0;

@end
