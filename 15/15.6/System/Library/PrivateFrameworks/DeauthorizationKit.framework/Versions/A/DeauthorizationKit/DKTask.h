@interface DKTask : NSObject

- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)taskDescription;
- (char)needsToRun;
- (char)runWithError:(id *)a0;
- (double)estimatedTimeOfCompletion;

@end
