@interface STRestrictionsFetcher : NSObject

+ (void)_fetchImageCreationStateForUserDSID:(id)a0 organizationSettingsRestrictionUtility:(id)a1 completionHandler:(id /* block */)a2;
+ (id)_fetchRestrictionsForUserDSID:(id)a0 inManagedObjectContext:(id)a1 allowImageCreation:(long long)a2 withError:(id *)a3;
+ (long long)_invertedRestrictionState:(long long)a0;
+ (long long)_restrictionStateForPayloadNumber:(id)a0;
+ (long long)_webContentFilterStateForWebFilterState:(unsigned long long)a0;
+ (unsigned long long)_webFilterStateForWebContentDeclaration:(id)a0;
+ (void)fetchRestrictionsForUserDSID:(id)a0 persistenceController:(id)a1 completionHandler:(id /* block */)a2;
+ (void)fetchRestrictionsForUserDSID:(id)a0 persistenceController:(id)a1 organizationSettingsRestrictionUtility:(id)a2 completionHandler:(id /* block */)a3;

@end
