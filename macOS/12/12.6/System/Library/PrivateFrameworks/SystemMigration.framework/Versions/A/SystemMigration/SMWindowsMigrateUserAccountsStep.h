@class SMWindowsMacPathMapper;

@interface SMWindowsMigrateUserAccountsStep : SMMigrationEngineStep

@property (retain) SMWindowsMacPathMapper *windowsMacPathMap;

- (void).cxx_destruct;
- (id)prepare;
- (id)process;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (id)initWithEngine:(id)a0 pathMap:(id)a1;
- (id)uniqueHomeDirectoryForUserWithName:(id)a0;
- (id)createUserAccount:(id)a0 withShortname:(id)a1 longname:(id)a2 password:(id)a3 authorizingUser:(id)a4 authorizingPassword:(id)a5 homeDirectory:(id)a6 outUID:(long long *)a7;

@end
