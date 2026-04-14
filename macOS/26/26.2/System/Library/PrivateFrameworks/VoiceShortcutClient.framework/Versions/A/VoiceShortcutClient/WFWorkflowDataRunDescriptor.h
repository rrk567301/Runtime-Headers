@class NSData;

@interface WFWorkflowDataRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, copy, nonatomic) NSData *workflowData;

+ (BOOL)supportsSecureCoding;

- (id)kind;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWorkflowData:(id)a0;

@end
