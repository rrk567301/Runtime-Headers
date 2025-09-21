@interface ABGroupListCreateGroupUIAction : ABAbstractGroupListAction

- (id)entryForCreatingGroups;
- (void)performWithSender:(id)a0;
- (char)requiresAuthorizationBeforeExecution;
- (char)validateWithMenuItem:(id)a0;

@end
