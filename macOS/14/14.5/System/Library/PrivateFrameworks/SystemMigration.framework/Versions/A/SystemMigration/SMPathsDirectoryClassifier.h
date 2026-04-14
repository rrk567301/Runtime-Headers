@class NSArray, NSDictionary, NSURL, SMPaths, NSMutableSet;

@interface SMPathsDirectoryClassifier : NSObject {
    unsigned long long systemFilesSize;
    unsigned long long printerFilesSize;
    unsigned long long libraryFilesSize;
    unsigned long long slashFilesSize;
    unsigned long long applicationsFilesSize;
    unsigned long long libraryPreferencesFilesSize;
    unsigned long long libraryPreferencesDirectoryServiceFilesSize;
    unsigned long long systemLibraryPrivateFrameworksFilesSize;
    unsigned long long serverFilesSize;
    unsigned long long legacyServerFilesSize;
    unsigned long long incompatibleAppsSize;
    unsigned long long systemFilesCount;
    unsigned long long printerFilesCount;
    unsigned long long libraryFilesCount;
    unsigned long long slashFilesCount;
    unsigned long long applicationsFilesCount;
    unsigned long long libraryPreferencesFilesCount;
    unsigned long long libraryPreferencesDirectoryServiceFilesCount;
    unsigned long long systemLibraryPrivateFrameworksFilesCount;
    unsigned long long serverFilesCount;
    unsigned long long legacyServerFilesCount;
    unsigned long long incompatibleAppsCount;
    unsigned long long *activeUserFilesSize;
    unsigned long long *activeUserFilesCount;
}

@property (retain, nonatomic) NSURL *directory;
@property (weak, nonatomic) SMPaths *pather;
@property (retain, nonatomic) NSMutableSet *systemFiles;
@property (retain, nonatomic) NSMutableSet *printerFiles;
@property (retain, nonatomic) NSMutableSet *libraryFiles;
@property (retain, nonatomic) NSMutableSet *slashFiles;
@property (retain, nonatomic) NSMutableSet *applicationsFiles;
@property (retain, nonatomic) NSMutableSet *libraryPreferencesFiles;
@property (retain, nonatomic) NSMutableSet *libraryPreferencesDirectoryServiceFiles;
@property (retain, nonatomic) NSMutableSet *systemLibraryPrivateFrameworksFiles;
@property (retain, nonatomic) NSMutableSet *serverFiles;
@property (retain, nonatomic) NSMutableSet *legacyServerFiles;
@property (retain, nonatomic) NSMutableSet *incompatibleAppsFiles;
@property (readonly, nonatomic) unsigned long long totalUserDataSize;
@property (readonly, nonatomic) unsigned long long totalFiles;
@property (retain, nonatomic) NSMutableSet *skippedBundles;
@property (nonatomic) BOOL containsConfMigratorClaimedFiles;
@property (nonatomic) BOOL containsDoNotScanPaths;
@property (retain, nonatomic) NSDictionary *prefixToGrouping;
@property (retain, nonatomic) NSArray *sortedPrefixes;
@property (weak, nonatomic) NSMutableSet *activeUserFileClassification;
@property (nonatomic) BOOL doNotCoalesce;
@property (nonatomic) BOOL statistical;

- (void).cxx_destruct;
- (void)absorbChildClassifier:(id)a0;
- (void)addBundle:(id)a0 atLocation:(id)a1 withSize:(unsigned long long)a2 andCount:(unsigned long long)a3;
- (void)addBundle:(id)a0 atLocation:(id)a1 withSize:(unsigned long long)a2 andCount:(unsigned long long)a3 isPlatformBinary:(BOOL)a4;
- (void)addFile:(id)a0 withSize:(unsigned long long)a1 andCount:(unsigned long long)a2;
- (void)addIncompatibleAppsFile:(id)a0 withSize:(unsigned long long)a1 andCount:(unsigned long long)a2;
- (void)addPrinterFile:(id)a0 withSize:(unsigned long long)a1 andCount:(unsigned long long)a2;
- (void)addSystemFile:(id)a0 withSize:(unsigned long long)a1;
- (void)addUserFile:(id)a0 withSize:(unsigned long long)a1;
- (void)addUserFile:(id)a0 withSize:(unsigned long long)a1 andCoalescedCount:(unsigned long long)a2;
- (BOOL)containsOnlyLegacyServerFiles;
- (BOOL)containsOnlyPrinterFiles;
- (BOOL)containsOnlySystemFiles;
- (BOOL)containsOnlyUserFiles;
- (unsigned long long *)countForGrouping:(id)a0;
- (id)initForPather:(id)a0 inDirectory:(id)a1;
- (void)noteDoNotScanPath;
- (void)setupActiveClassification;
- (unsigned long long *)sizeForGrouping:(id)a0;
- (unsigned long long)totalUserFiles;

@end
