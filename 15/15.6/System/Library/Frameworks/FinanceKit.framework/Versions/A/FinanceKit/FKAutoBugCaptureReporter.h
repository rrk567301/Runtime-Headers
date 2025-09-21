@interface FKAutoBugCaptureReporter : NSObject

- (char)isRunningUnitTests;
- (void)reportIssueWithDomain:(id)a0 type:(id)a1 subtype:(id)a2 subtypeContext:(id)a3 payload:(id)a4;
- (void)handleResponse:(id)a0;
- (char)isExpectedFailureReason:(int)a0;
- (char)shouldReportIssue;

@end
