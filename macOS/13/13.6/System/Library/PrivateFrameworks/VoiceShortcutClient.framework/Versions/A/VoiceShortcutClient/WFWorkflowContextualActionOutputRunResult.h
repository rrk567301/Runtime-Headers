@class NSArray, NSData;

@interface WFWorkflowContextualActionOutputRunResult : WFWorkflowRunResult

@property (readonly, nonatomic) NSArray *files;
@property (readonly, nonatomic) NSData *reversalState;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFiles:(id)a0 runError:(id)a1 reversalState:(id)a2;

@end
