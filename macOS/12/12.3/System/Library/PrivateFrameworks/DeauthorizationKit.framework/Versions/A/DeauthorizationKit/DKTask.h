@interface DKTask : NSObject

- (id)identifier;
- (id)taskDescription;
- (void)runWithCompletion:(id /* block */)a0;
- (BOOL)runWithError:(id *)a0;
- (BOOL)needsToRun;
- (double)estimatedTimeOfCompletion;

@end
