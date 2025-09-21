@interface _NURenderPipelineBlockVariable : NURenderPipelineFunction

@property (readonly, copy, nonatomic) id /* block */ evaluationBlock;

- (id)evaluate:(id)a0 error:(out id *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 parameters:(id)a1;
- (id)initWithName:(id)a0 parameters:(id)a1 evaluationBlock:(id /* block */)a2;

@end
