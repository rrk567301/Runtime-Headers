@class NSString, NSArray, SKAPFSDisk, NSURL, NSMutableDictionary;

@interface OSITemplateMigrationOptions : OSInstallOptions

@property (retain) NSString *migrateRequiringBuild;
@property BOOL migrateEvenWithSameBuild;
@property BOOL disableRemounting;
@property BOOL disableStateTracking;
@property (retain) SKAPFSDisk *systemVolume;
@property (retain) SKAPFSDisk *dataVolume;
@property (retain) SKAPFSDisk *updateVolume;
@property (retain) NSURL *cookieFilePath;
@property (retain) NSURL *bootPlistFilePath;
@property (retain) NSArray *postMigrationInstallPaths;
@property (retain) NSString *seedingProgram;
@property (retain) NSString *volumeUUIDToErase;
@property (retain) NSMutableDictionary *cookieData;
@property unsigned long long requiredTasks;
@property long long exitStyle;
@property BOOL systemWasArchived;
@property BOOL didRequestEraseInstall;
@property BOOL isCombinedSoftwareUpdateAndMigration;
@property BOOL nonTemplateMigration;

+ (id)currentlySetOptions;

- (void)endTask;
- (id)objectForKeyedSubscript:(id)a0;
- (id)dictionaryRepresentation;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (void)setDictionaryRepresentation:(id)a0;
- (void)beginTask;
- (void)commitCookieData;
- (void)findPrebootAndLoadCookie;
- (id)findVolumeWithRole:(id)a0;
- (BOOL)getNextTask:(unsigned long long *)a0 recovery:(BOOL *)a1;
- (id)initWithSystemVolume:(id)a0 andDataVolume:(id)a1;
- (void)makeUpdateVolumeAvailable;

@end
