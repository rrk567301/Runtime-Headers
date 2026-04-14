@class WFHarnessTestResult;

@interface WFHarnessTestRunResult : WFWorkflowRunResult

@property (readonly, nonatomic) WFHarnessTestResult *testResult;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTestResult:(id)a0;

@end
