@class FPDExtensionManager;

@interface FPDTelemetryService : NSObject

@property (retain, nonatomic) FPDExtensionManager *extensionManager;

- (void).cxx_destruct;
- (void)start;

@end
