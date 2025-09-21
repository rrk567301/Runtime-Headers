@class NSArray, NSData;

@interface WFWorkflowContextualActionOutputRunResult : WFWorkflowOutputRunResult

@property (readonly, nonatomic) NSArray *files;
@property (readonly, nonatomic) NSData *reversalState;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOutput:(id)a0 files:(id)a1 runError:(id)a2 reversalState:(id)a3;

@end
