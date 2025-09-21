@class WFSiriWorkflowRunnerClientOptions;

@interface WFSiriWorkflowRunRequest : WFWorkflowRunRequest

@property (retain, nonatomic) WFSiriWorkflowRunnerClientOptions *options;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(id)a0;
- (char)handlesSiriActionRequests;

@end
