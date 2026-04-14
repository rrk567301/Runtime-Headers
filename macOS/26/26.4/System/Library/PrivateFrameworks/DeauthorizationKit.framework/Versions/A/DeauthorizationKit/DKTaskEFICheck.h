@interface DKTaskEFICheck : DKTask

+ (BOOL)efiPasswordExists;

- (void)runWithCompletion:(id /* block */)a0;
- (id)taskDescription;
- (id)identifier;
- (BOOL)needsToRun;
- (BOOL)runWithError:(id *)a0;

@end
