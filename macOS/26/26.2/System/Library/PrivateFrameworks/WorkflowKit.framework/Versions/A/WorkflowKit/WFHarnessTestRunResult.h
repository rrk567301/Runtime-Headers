@class WFHarnessTestResult;

@interface WFHarnessTestRunResult : WFWorkflowRunResult

@property (readonly, nonatomic) WFHarnessTestResult *testResult;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTestResult:(id)a0;

@end
