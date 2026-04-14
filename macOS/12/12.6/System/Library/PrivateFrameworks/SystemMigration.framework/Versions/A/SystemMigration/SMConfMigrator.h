@class NSArray, NSDictionary, NSProgress, SMSystem_Daemon;

@interface SMConfMigrator : NSObject

@property (readonly, nonatomic) NSDictionary *longTermSourceSystemIdentifier;
@property (readonly, nonatomic) NSDictionary *longTermDestinationSystemIdentifier;
@property (readonly) SMSystem_Daemon *source;
@property (readonly) SMSystem_Daemon *destination;
@property (retain) NSArray *synthesizedLegacyServerRules;
@property BOOL doNotModifyTarget;
@property (retain) NSProgress *parentProgress;
@property double parentProgressPendingUnits;

+ (id)confMigratorDirectory;
+ (id)baseMigrationDataBundle;
+ (id)confMigratorDictionary;
+ (id)stringBySubstitutingEnvironmentVariablesInString:(id)a0 environment:(id)a1;
+ (id)migrationDataVersion;

- (void).cxx_destruct;
- (id)initWithSource:(id)a0 destination:(id)a1;
- (id)allApplicableRules:(unsigned long long)a0;
- (void)migrateAllSettingsWithGroupName:(id)a0;
- (void)executeToolAtPath:(id)a0 withArguments:(id)a1 andCopyPath:(id)a2;
- (void)executeToolAtPath:(id)a0 withArguments:(id)a1 andCopyPath:(id)a2 usingDeferral:(BOOL)a3 allowSIP:(BOOL)a4;
- (void)migrateWithRule:(id)a0;
- (id)synthesizeLegacyServerRulesFromPather:(id)a0;

@end
