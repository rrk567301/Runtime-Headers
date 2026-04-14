@interface DKTask : NSObject

- (void)runWithCompletion:(id /* block */)a0;
- (id)taskDescription;
- (id)identifier;
- (BOOL)needsToRun;
- (BOOL)runWithError:(id *)a0;
- (double)estimatedTimeOfCompletion;

@end
