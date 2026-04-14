@class NSMutableArray;

@interface _NUPipelineEvaluationContext : NSObject <NUPipelineEvaluationContext> {
    NSMutableArray *_scopes;
}

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dataForChannel:(id)a0;
- (void)setChannelData:(id)a0;
- (void)beginScope:(id)a0;
- (id)currentScope;
- (void)endScope:(id)a0;
- (void)setData:(id)a0 forChannel:(id)a1;

@end
