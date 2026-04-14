@protocol CNUIParentContainerCache;

@interface CNUIEditingPolicy : NSObject <NSCopying>

@property (retain, nonatomic) id<CNUIParentContainerCache> parentContainerCache;

+ (id)defaultPolicy;
+ (id)guardianPolicy;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldIgnoreGuardianRestrictions;
- (BOOL)shouldPromptForAuthorizationWhenInsertingNewContactToContainer:(id)a0;
- (id)evaluateWithContact:(id)a0 container:(id)a1;
- (void)executeActionWhileIgnoringGuardianRestrictions:(id /* block */)a0;
- (BOOL)shouldBypassRestrictionsWhenSavingContact:(id)a0 inContainer:(id)a1 givenAuhtorizationResult:(long long)a2;
- (BOOL)shouldPromptForAuthorizationWhenDeletingContact:(id)a0 fromContainer:(id)a1;
- (BOOL)shouldPromptForAuthorizationWhenUpdatingContact:(id)a0 inContainer:(id)a1;
- (BOOL)shouldSignalSharedAccessToContact:(id)a0 inContainer:(id)a1;

@end
