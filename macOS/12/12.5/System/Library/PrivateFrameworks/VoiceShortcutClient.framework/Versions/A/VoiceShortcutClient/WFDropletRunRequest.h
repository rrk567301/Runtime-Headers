@class NSArray;

@interface WFDropletRunRequest : WFWorkflowRunRequest

@property (readonly, nonatomic) NSArray *fileURLs;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)getInputWithCompletionHandler:(id /* block */)a0;
- (id)initWithDescriptor:(id)a0 fileURLs:(id)a1;

@end
