@interface WFConditionallyCompiledActionProvider : WFActionProvider

- (id)actionDefinitionsWithIdentifiers:(id)a0;
- (void)createActionsForRequests:(id)a0;
- (id)allActionDefinitionsByIdentifier;
- (id)availableActionIdentifiers;

@end
