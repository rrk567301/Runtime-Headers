@interface SDSeedProgramMigrator : NSObject

+ (BOOL)fixupSeedProgramSettings;
+ (void)migrateSeedProgramSettings;
+ (void)_removeObsoleteCatalogs;
+ (void)_removeObsoleteAudiences;
+ (BOOL)_enrollInSeedProgramFromCookie;
+ (void)_writeDockFixupPlistWithFBA;

@end
