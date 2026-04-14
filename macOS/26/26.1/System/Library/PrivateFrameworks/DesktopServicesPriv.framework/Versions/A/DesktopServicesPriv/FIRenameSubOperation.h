@interface FIRenameSubOperation : FISubOperation

- (id)configureOperationRecord:(id)a0 forNode:(id)a1 rawName:(id)a2 hideExtension:(const void *)a3;
- (BOOL)reconfigureOpForRename:(id)a0 error:(id *)a1;
- (BOOL)startRename:(id *)a0;

@end
