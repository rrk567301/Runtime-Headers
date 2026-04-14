@class WFHarnessTestCase, NSURL, NSString;

@interface WFHarnessTestRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) BOOL holdingSecurityScopedAccess;
@property (retain, nonatomic) WFHarnessTestCase *testCase;
@property (readonly, nonatomic) NSURL *testBundleURL;
@property (readonly, copy, nonatomic) NSString *xcTestClass;
@property (readonly, copy, nonatomic) NSString *testIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)createWorkflowWithEnvironment:(long long)a0 database:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTestBundleURL:(id)a0 xcTestClass:(id)a1 testIdentifier:(id)a2;
- (id)loadTestCaseWithError:(id *)a0;

@end
