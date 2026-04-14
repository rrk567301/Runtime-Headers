@class DEExtension;

@interface FPDiagnosticExtensionManager : NSObject {
    DEExtension *fpExtension;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)triggerDiagnosticsFor:(id)a0 persistingAt:(id)a1 completionHandler:(id /* block */)a2;

@end
