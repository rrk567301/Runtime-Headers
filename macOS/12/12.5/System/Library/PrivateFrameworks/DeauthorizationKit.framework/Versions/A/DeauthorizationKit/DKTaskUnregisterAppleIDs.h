@interface DKTaskUnregisterAppleIDs : DKTask

- (id)identifier;
- (id)taskDescription;
- (void)runWithCompletion:(id /* block */)a0;
- (BOOL)runWithError:(id *)a0;
- (double)estimatedTimeOfCompletion;

@end
