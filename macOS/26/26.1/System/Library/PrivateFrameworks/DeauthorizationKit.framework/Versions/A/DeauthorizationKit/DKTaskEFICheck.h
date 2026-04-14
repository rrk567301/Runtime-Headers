@interface DKTaskEFICheck : DKTask

+ (BOOL)efiPasswordExists;

- (id)identifier;
- (id)taskDescription;
- (void)runWithCompletion:(id /* block */)a0;
- (BOOL)needsToRun;
- (BOOL)runWithError:(id *)a0;

@end
