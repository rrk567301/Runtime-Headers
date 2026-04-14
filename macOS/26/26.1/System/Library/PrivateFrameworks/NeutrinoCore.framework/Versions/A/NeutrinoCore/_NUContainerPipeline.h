@interface _NUContainerPipeline : _NUPipeline

- (id)initWithIdentifier:(id)a0;
- (id)alias;
- (id)init;
- (BOOL)isInline;
- (id)_addInputChannel:(id)a0;
- (id)_addOutputChannel:(id)a0;
- (id)_evaluateOutputPort:(id)a0 context:(id)a1 error:(out id *)a2;

@end
