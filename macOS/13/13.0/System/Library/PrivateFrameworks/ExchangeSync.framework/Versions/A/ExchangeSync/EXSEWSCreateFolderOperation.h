@interface EXSEWSCreateFolderOperation : EXSEWSOperation

- (id)initWithProtocol:(id)a0;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;
- (id)_createFolderTypeForChangeItem:(id)a0;

@end
