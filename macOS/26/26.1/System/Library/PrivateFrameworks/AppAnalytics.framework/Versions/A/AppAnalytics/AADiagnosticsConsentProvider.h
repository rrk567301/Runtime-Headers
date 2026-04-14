@interface AADiagnosticsConsentProvider : NSObject {
    void /* unknown type, empty encoding */ provider;
}

@property (class, nonatomic, readonly) AADiagnosticsConsentProvider *default;
@property (class, nonatomic, readonly) AADiagnosticsConsentProvider *allowed;
@property (class, nonatomic, readonly) AADiagnosticsConsentProvider *disallowed;
@property (class, nonatomic, readonly) BOOL _isDiagnosticSubmissionAllowedTaskLocal;

+ (id)custom:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;

@end
