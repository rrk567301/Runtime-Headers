@class NSArray;

@interface WFDropletRunRequest : WFWorkflowRunRequest

@property (readonly, nonatomic) NSArray *fileURLs;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)getInputWithCompletionHandler:(id /* block */)a0;
- (id)initWithFileURLs:(id)a0;

@end
