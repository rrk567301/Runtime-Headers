@interface _CNUIStandardEditingPolicy : CNUIEditingPolicy

@property (nonatomic) char temporarilyIgnoringGuardianRestictions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)shouldIgnoreGuardianRestrictions;
- (char)shouldPromptForAuthorizationWhenInsertingNewContactToContainer:(id)a0;
- (id)authorizationCheckForContact:(id)a0 inContainer:(id)a1;
- (void)executeActionWhileIgnoringGuardianRestrictions:(id /* block */)a0;
- (char)shouldBypassRestrictionsWhenSavingContact:(id)a0 inContainer:(id)a1 givenAuhtorizationResult:(long long)a2;
- (char)shouldPromptForAuthorizationWhenDeletingContact:(id)a0 fromContainer:(id)a1;
- (char)shouldPromptForAuthorizationWhenUpdatingContact:(id)a0 inContainer:(id)a1;
- (char)shouldSignalSharedAccessToContact:(id)a0 inContainer:(id)a1;

@end
