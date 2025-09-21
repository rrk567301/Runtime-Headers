@interface _CNUIGuardianEditingPolicy : _CNUIStandardEditingPolicy

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)shouldIgnoreGuardianRestrictions;
- (char)shouldPromptForAuthorizationWhenInsertingNewContactToContainer:(id)a0;
- (char)shouldBypassRestrictionsWhenSavingContact:(id)a0 inContainer:(id)a1 givenAuhtorizationResult:(long long)a2;
- (char)shouldPromptForAuthorizationWhenDeletingContact:(id)a0 fromContainer:(id)a1;
- (char)shouldPromptForAuthorizationWhenUpdatingContact:(id)a0 inContainer:(id)a1;
- (char)shouldSignalSharedAccessToContact:(id)a0 inContainer:(id)a1;

@end
