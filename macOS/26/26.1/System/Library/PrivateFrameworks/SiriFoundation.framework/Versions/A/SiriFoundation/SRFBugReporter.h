@class SDRDiagnosticReporter;

@interface SRFBugReporter : NSObject

@property (retain) SDRDiagnosticReporter *diagnosticReporter;

+ (id)sharedReporter;

- (void).cxx_destruct;
- (id)init;
- (void)reportIssue:(id)a0 subtype:(id)a1 description:(id)a2;
- (void)reportIssue:(id)a0 subtype:(id)a1 description:(id)a2 completionBlock:(id /* block */)a3;

@end
