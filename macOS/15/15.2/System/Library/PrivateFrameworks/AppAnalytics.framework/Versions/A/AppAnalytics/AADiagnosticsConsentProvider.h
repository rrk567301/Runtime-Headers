@interface AADiagnosticsConsentProvider : NSObject {
    void /* unknown type, empty encoding */ provider;
}

@property (class, nonatomic, readonly) AADiagnosticsConsentProvider *default;
@property (class, nonatomic, readonly) AADiagnosticsConsentProvider *allowed;
@property (class, nonatomic, readonly) AADiagnosticsConsentProvider *disallowed;

+ (id)custom:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;

@end
