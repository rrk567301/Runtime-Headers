@class NSArray;

@interface WFSiriWorkflowRunRequest : WFWorkflowRunRequest

@property (retain, nonatomic) NSArray *airPlayRouteIDs;
@property (nonatomic) long long executionContext;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithExecutionContext:(long long)a0 airPlayRouteIDs:(id)a1;

@end
