@interface SDSeedProgramMigrator : NSObject

+ (char)_enrollInSeedProgram:(long long)a0;
+ (char)_enrollInSeedProgramFromCookie;
+ (void)_removeObsoleteAudiences;
+ (void)_removeObsoleteCatalogs;
+ (void)_writeDockFixupPlistWithFBA;
+ (char)fixupSeedProgramSettings;
+ (void)migrateSeedProgramSettings;

@end
