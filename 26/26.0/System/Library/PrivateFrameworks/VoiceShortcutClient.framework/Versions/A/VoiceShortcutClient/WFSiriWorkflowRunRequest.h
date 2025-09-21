@class WFSiriWorkflowRunnerClientOptions;

@interface WFSiriWorkflowRunRequest : WFWorkflowRunRequest

@property (retain, nonatomic) WFSiriWorkflowRunnerClientOptions *options;

+ (BOOL)supportsSecureCoding;

- (id)initWithOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)handlesSiriActionRequests;

@end
