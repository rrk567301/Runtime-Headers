@interface DKTaskEFICheck : DKTask

+ (char)efiPasswordExists;

- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)taskDescription;
- (char)needsToRun;
- (char)runWithError:(id *)a0;

@end
