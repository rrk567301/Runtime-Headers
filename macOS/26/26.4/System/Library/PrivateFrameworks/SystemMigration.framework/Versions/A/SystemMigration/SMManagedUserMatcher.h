@interface SMManagedUserMatcher : NSObject

+ (id)createAutoMatchForSourceUser:(id)a0 targetUser:(id)a1;
+ (id)createMatchFromResult:(id)a0 smUser:(id)a1;
+ (id)enumerateLocalUsersWithExcludedAccounts:(id)a0;
+ (id)findMatchesForSourceUsers:(id)a0;
+ (id)fullNameFromODRecord:(id)a0;
+ (id)getExcludedAccountsSet;
+ (BOOL)hasValidHomeDirectoryForODRecord:(id)a0;
+ (id)homeDirectoryFromODRecord:(id)a0;
+ (BOOL)isAccountExcluded:(id)a0 excludedAccounts:(id)a1;
+ (id)matchSourceUsers:(id)a0 toTargetUser:(id)a1;
+ (id)normalizeNameForComparison:(id)a0;
+ (id)parseNameComponents:(id)a0;
+ (id)scoreUserMatchWithSourceFullName:(id)a0 sourceShortName:(id)a1 targetFullName:(id)a2 targetShortName:(id)a3 isFileVaultUser:(BOOL)a4;
+ (id)shortNameFromODRecord:(id)a0;
+ (void)sortMatchesByConfidence:(id)a0;
+ (long long)uidFromODRecord:(id)a0;

@end
