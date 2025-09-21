@interface ACAccountMigrationState : NSObject

@property (class, readonly, getter=isMigrationFinished) char migrationFinished;

+ (id)_currentSystemVersion;
+ (char)migrationFinishedForKey:(struct __CFString { } *)a0;
+ (void)writeMigrationVersionPref;
+ (void)writeMigrationVersionPrefForKey:(struct __CFString { } *)a0;

@end
