@interface _NUReducePipeline : _NUPipeline

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (id)alias;
- (BOOL)isInline;
- (id)_addInputChannel:(id)a0;
- (id)_evaluateOutputPort:(id)a0 context:(id)a1 error:(out id *)a2;

@end
