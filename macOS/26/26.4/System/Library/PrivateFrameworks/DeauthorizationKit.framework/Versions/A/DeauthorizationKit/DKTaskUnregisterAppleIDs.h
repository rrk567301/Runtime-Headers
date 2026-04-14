@interface DKTaskUnregisterAppleIDs : DKTask

- (void)runWithCompletion:(id /* block */)a0;
- (id)taskDescription;
- (id)identifier;
- (BOOL)runWithError:(id *)a0;
- (double)estimatedTimeOfCompletion;

@end
