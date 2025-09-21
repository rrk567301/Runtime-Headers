@class NSString, NSArray, SKAPFSDisk, NSURL, NSMutableDictionary;

@interface OSITemplateMigrationOptions : OSInstallOptions

@property (retain) NSString *migrateRequiringBuild;
@property char migrateEvenWithSameBuild;
@property char disableRemounting;
@property char disableStateTracking;
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
@property char systemWasArchived;
@property char didRequestEraseInstall;
@property char isCombinedSoftwareUpdateAndMigration;
@property char nonTemplateMigration;

+ (id)currentlySetOptions;

- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)dictionaryRepresentation;
- (void)setDictionaryRepresentation:(id)a0;
- (void)endTask;
- (void)beginTask;
- (void)commitCookieData;
- (void)findPrebootAndLoadCookie;
- (id)findVolumeWithRole:(id)a0;
- (char)getNextTask:(unsigned long long *)a0 recovery:(char *)a1;
- (id)initWithSystemVolume:(id)a0 andDataVolume:(id)a1;
- (void)makeUpdateVolumeAvailable;

@end
