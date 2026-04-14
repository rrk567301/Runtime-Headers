@interface ABGroupListCreateGroupUIAction : ABAbstractGroupListAction

- (BOOL)validateWithMenuItem:(id)a0;
- (void)performWithSender:(id)a0;
- (BOOL)requiresAuthorizationBeforeExecution;
- (id)entryForCreatingGroups;

@end
