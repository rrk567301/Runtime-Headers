@interface _CNUIGuardianEditingPolicy : _CNUIStandardEditingPolicy

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldIgnoreGuardianRestrictions;
- (BOOL)shouldSignalSharedAccessToContact:(id)a0 inContainer:(id)a1;
- (BOOL)shouldPromptForAuthorizationWhenInsertingNewContactToContainer:(id)a0;
- (BOOL)shouldPromptForAuthorizationWhenUpdatingContact:(id)a0 inContainer:(id)a1;
- (BOOL)shouldPromptForAuthorizationWhenDeletingContact:(id)a0 fromContainer:(id)a1;
- (BOOL)shouldBypassRestrictionsWhenSavingContact:(id)a0 inContainer:(id)a1 givenAuhtorizationResult:(long long)a2;

@end
