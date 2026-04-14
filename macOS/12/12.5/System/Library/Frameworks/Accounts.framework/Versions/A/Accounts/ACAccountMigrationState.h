@interface ACAccountMigrationState : NSObject

@property (class, readonly, getter=isMigrationFinished) BOOL migrationFinished;

+ (id)_currentSystemVersion;
+ (void)writeMigrationVersionPref;

@end
