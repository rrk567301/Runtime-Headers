@class AXSSPunctuationEntryCloudKitHelper, NSString, NSArray, AXSSPunctuationGroupCloudKitHelper;

@interface AXSSPunctuationManager : AXSSDatabaseManager {
    AXSSPunctuationEntryCloudKitHelper *_punctuationEntryCloudKitHelper;
    AXSSPunctuationGroupCloudKitHelper *_punctuationGroupCloudKitHelper;
    char _finishedInitialization;
}

@property (class, retain, nonatomic) NSString *overrideDatabasePath;

@property (nonatomic) char cloudKitSync;
@property (nonatomic) char cloudKitPushInSameProcess;
@property (readonly, nonatomic) NSArray *punctuationGroups;

+ (void)initialize;
+ (id)sharedDatabase;

- (id)init;
- (void).cxx_destruct;
- (void)updateEntry:(id)a0;
- (char)isProtectedDataAvailable;
- (id)punctuationEntriesForGroupUUID:(id)a0;
- (char)_saveIfPossible;
- (void)userAuthChanged;
- (void)_cloudKitUpdated:(id)a0;
- (id)_databaseDirectoryPath;
- (id)_databaseFilePath;
- (void)_filterAutoswitchContexts:(id)a0 punctuationGroupsForContexts:(id)a1;
- (void)_initializeCloudKitHelpers;
- (void)_initializeDatabaseStartup;
- (void)_initializeSystemGroups;
- (void)_managedObjectChanged:(id)a0;
- (id)_punctuationEntryFromManagedObject:(id)a0;
- (id)_punctuationGroupForEntry:(id)a0;
- (id)_punctuationGroupFromManagedObject:(id)a0;
- (void)_setupDatabase;
- (void)_updateCloudKitHelpers;
- (void)addCloudRecordToPurge:(id)a0 recordEntityType:(id)a1;
- (id)allPunctuationGroup;
- (id)cloudRecordsToPurge:(id)a0;
- (void)importPunctuationGroup:(id)a0;
- (char)isBasePunctuationGroup:(id)a0;
- (id)mostBasePunctuationGroupForGroup:(id)a0;
- (id)nextDefaultGroupName;
- (id)nonePunctuationGroup;
- (id)parentPunctuationGroup:(id)a0;
- (id)punctuationEntryForUUID:(id)a0;
- (id)punctuationEntryObjectFromLocalObjects:(id)a0;
- (id)punctuationGroupForUUID:(id)a0;
- (id)punctuationGroupsForContexts;
- (void)removeAllRecordsForPurge;
- (void)removeCloudRecordForPurge:(id)a0;
- (void)removeEntry:(id)a0;
- (void)removePunctuationGroup:(id)a0;
- (id)ruleToString:(long long)a0;
- (id)somePunctuationGroup;
- (long long)stringToRule:(id)a0;
- (void)updateEntry:(id)a0 fromCloudKit:(char)a1;
- (void)updatePunctuationGroup:(id)a0;
- (void)updatePunctuationGroup:(id)a0 fromCloudKit:(char)a1;

@end
