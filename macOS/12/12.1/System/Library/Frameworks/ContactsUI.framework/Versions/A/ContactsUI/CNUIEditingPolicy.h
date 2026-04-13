@protocol CNUIParentContainerCache;

@interface CNUIEditingPolicy : NSObject <NSCopying>

@property (retain, nonatomic) id<CNUIParentContainerCache> parentContainerCache;

+ (id)defaultPolicy;
+ (id)guardianPolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)shouldIgnoreGuardianRestrictions;
- (void)executeActionWhileIgnoringGuardianRestrictions:(id /* block */)a0;
- (BOOL)shouldSignalSharedAccessToContact:(id)a0 inContainer:(id)a1;
- (BOOL)shouldPromptForAuthorizationWhenInsertingNewContactToContainer:(id)a0;
- (BOOL)shouldPromptForAuthorizationWhenUpdatingContact:(id)a0 inContainer:(id)a1;
- (BOOL)shouldPromptForAuthorizationWhenDeletingContact:(id)a0 fromContainer:(id)a1;
- (BOOL)shouldBypassRestrictionsWhenSavingContact:(id)a0 inContainer:(id)a1 givenAuhtorizationResult:(long long)a2;
- (id)evaluateWithContact:(id)a0 container:(id)a1;

@end
