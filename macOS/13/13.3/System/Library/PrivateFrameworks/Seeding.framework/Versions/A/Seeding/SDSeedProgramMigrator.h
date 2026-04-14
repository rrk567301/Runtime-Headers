@interface SDSeedProgramMigrator : NSObject

+ (BOOL)_enrollInSeedProgramFromCookie;
+ (void)_removeObsoleteAudiences;
+ (void)_removeObsoleteCatalogs;
+ (void)_writeDockFixupPlistWithFBA;
+ (BOOL)fixupSeedProgramSettings;
+ (void)migrateSeedProgramSettings;

@end
