@interface ACAccountMigrationState : NSObject

@property (class, readonly, getter=isMigrationFinished) BOOL migrationFinished;

+ (BOOL)migrationFinishedForKey:(struct __CFString { } *)a0;
+ (id)_currentSystemVersion;
+ (void)writeMigrationVersionPref;
+ (void)writeMigrationVersionPrefForKey:(struct __CFString { } *)a0;

@end
