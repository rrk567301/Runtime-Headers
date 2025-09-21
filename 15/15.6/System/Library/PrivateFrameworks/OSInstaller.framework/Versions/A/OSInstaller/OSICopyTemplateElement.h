@interface OSICopyTemplateElement : OSIInstallQueueElement

@property unsigned long long templateFileCount;
@property unsigned long long filesCopied;

- (id)initWithOptions:(id)a0;
- (id)operationName;
- (char)runReturningError:(id *)a0;
- (char)_restrictInstallerCompatibility;
- (char)_createFirmlinksWithError:(id *)a0;
- (char)_installDataTemplateWithError:(id *)a0;
- (char)_operation:(unsigned int)a0 withSource:(id)a1 destination:(id)a2 destinationFolderName:(id)a3 error:(id *)a4;
- (char)_propagateUserTemplateAttributes;
- (void)_updateFilesCopiedCount:(long long)a0;
- (double)estimatedTimeToComplete;

@end
