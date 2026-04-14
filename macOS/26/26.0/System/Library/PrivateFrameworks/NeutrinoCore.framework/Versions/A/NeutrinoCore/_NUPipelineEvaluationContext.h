@class NSMutableArray;

@interface _NUPipelineEvaluationContext : NSObject <NUPipelineEvaluationContext> {
    NSMutableArray *_scopes;
}

- (id)debugDescription;
- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)dataForChannel:(id)a0;
- (void)setChannelData:(id)a0;
- (void)beginScope:(id)a0;
- (id)currentScope;
- (void)endScope:(id)a0;
- (void)setData:(id)a0 forChannel:(id)a1;

@end
