@class NSData;

@interface WFWorkflowDataRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, copy, nonatomic) NSData *workflowData;

+ (BOOL)supportsSecureCoding;

- (id)kind;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithWorkflowData:(id)a0;

@end
