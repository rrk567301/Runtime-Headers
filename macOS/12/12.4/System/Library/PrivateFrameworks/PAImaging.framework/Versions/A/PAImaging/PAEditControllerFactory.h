@interface PAEditControllerFactory : NSObject

+ (BOOL)_compositionControllerEditEnabled;
+ (id)editControllerWithOperations:(id)a0 editSource:(id)a1 inputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a2 orientation:(long long)a3 pipelineVersion:(long long)a4;
+ (id)editControllerWithRenderDescription:(id)a0 editSource:(id)a1;
+ (id)editControllerWithProvider:(id)a0;

@end
