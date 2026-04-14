@interface MADTextTokenizationTask : MADServiceTextProcessingSubtask

+ (BOOL)prewarmRequest:(id)a0 error:(id *)a1;

- (int)run;
- (BOOL)processInput:(id)a0 resource:(id)a1 tokenIDs:(id *)a2 error:(id *)a3;

@end
