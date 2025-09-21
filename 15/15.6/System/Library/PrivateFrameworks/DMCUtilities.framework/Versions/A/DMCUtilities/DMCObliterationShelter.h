@class NSArray, NSString, NSData, NSDictionary;

@interface DMCObliterationShelter : NSObject

@property (nonatomic) char hasConfigFile;
@property (copy, nonatomic) NSArray *languageStrings;
@property (copy, nonatomic) NSString *localeString;
@property (retain, nonatomic) NSData *wifiProfileData;
@property (retain, nonatomic) NSData *mdmProfileData;
@property (retain, nonatomic) NSDictionary *cloudConfigurationDetails;
@property (nonatomic) char isSupervised;

- (id)init;
- (void).cxx_destruct;
- (char)clear;
- (char)preserveWithError:(id *)a0;
- (char)retrieveWithError:(id *)a0;
- (void)migrateAllFiles;
- (id)_allPathsToClear;
- (id)_cloudConfigProfilePath_retrieve;
- (id)_cloudConfigProfilePath_stash;
- (id)_configurationDictionaryPath_retrieve;
- (id)_configurationDictionaryPath_stash;
- (id)_containerMetadataPlistPath_stash;
- (char)_createDirectoryAtPathIfNeeded:(id)a0 error:(id *)a1;
- (id)_generateConfigurationDictionary;
- (id)_mdmProfilePath_retrieve;
- (id)_mdmProfilePath_stash;
- (void)_postConfigChangedNotification;
- (id)_retrievalDirectoryPath;
- (id)_stashDirectoryPath;
- (id)_wifiProfilePath_retrieve;
- (id)_wifiProfilePath_stash;
- (id)generateExclusionPaths;

@end
