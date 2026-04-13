@interface SDSeedProgramMigrator : NSObject

+ (BOOL)fixupSeedProgramSettings;
+ (void)_removeObsoleteCatalogs;
+ (void)_removeObsoleteAudiences;
+ (BOOL)_enrollInSeedProgramFromCookie;
+ (void)_writeDockFixupPlistWithFBA;
+ (void)migrateSeedProgramSettings;

@end
