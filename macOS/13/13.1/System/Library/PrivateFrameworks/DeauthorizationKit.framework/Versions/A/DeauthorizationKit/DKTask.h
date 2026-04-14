@interface DKTask : NSObject

- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)taskDescription;
- (BOOL)runWithError:(id *)a0;
- (BOOL)needsToRun;
- (double)estimatedTimeOfCompletion;

@end
