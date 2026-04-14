@interface _CNUIStandardEditingPolicy : CNUIEditingPolicy

@property (nonatomic) BOOL temporarilyIgnoringGuardianRestictions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldIgnoreGuardianRestrictions;
- (id)authorizationCheckForContact:(id)a0 inContainer:(id)a1;
- (void)executeActionWhileIgnoringGuardianRestrictions:(id /* block */)a0;
- (BOOL)shouldSignalSharedAccessToContact:(id)a0 inContainer:(id)a1;
- (BOOL)shouldPromptForAuthorizationWhenInsertingNewContactToContainer:(id)a0;
- (BOOL)shouldPromptForAuthorizationWhenUpdatingContact:(id)a0 inContainer:(id)a1;
- (BOOL)shouldPromptForAuthorizationWhenDeletingContact:(id)a0 fromContainer:(id)a1;
- (BOOL)shouldBypassRestrictionsWhenSavingContact:(id)a0 inContainer:(id)a1 givenAuhtorizationResult:(long long)a2;

@end
