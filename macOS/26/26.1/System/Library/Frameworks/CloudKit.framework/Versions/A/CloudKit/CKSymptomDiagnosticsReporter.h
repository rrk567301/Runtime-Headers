@class NSString, NSError;

@interface CKSymptomDiagnosticsReporter : NSObject {
    void /* unknown type, empty encoding */ wrapped;
}

@property (class, nonatomic, readonly) CKSymptomDiagnosticsReporter *defaultReporter;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDiagnosticReporterProvider:(id /* block */)a0;
- (void)reportWithType:(NSString *)a0 subType:(NSString *)a1 reason:(NSString *)a2 context:(NSString *)a3 processName:(NSString *)a4 completionHandler:(void (^)(NSError *))a5;

@end
