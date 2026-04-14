@class AXSSPunctuationEntryCloudKitHelper, NSString, NSArray, AXSSPunctuationGroupCloudKitHelper;

@interface AXSSPunctuationManager : AXSSDatabaseManager {
    AXSSPunctuationEntryCloudKitHelper *_punctuationEntryCloudKitHelper;
    AXSSPunctuationGroupCloudKitHelper *_punctuationGroupCloudKitHelper;
    BOOL _finishedInitialization;
}

@property (class, retain, nonatomic) NSString *overrideDatabasePath;

@property (nonatomic) BOOL cloudKitSync;
@property (nonatomic) BOOL cloudKitPushInSameProcess;
@property (readonly, nonatomic) NSArray *punctuationGroups;

+ (void)initialize;
+ (id)sharedDatabase;

- (id)init;
- (void)updateEntry:(id)a0;
- (void).cxx_destruct;
- (BOOL)isProtectedDataAvailable;
- (void)_managedObjectChanged:(id)a0;
- (void)_cloudKitUpdated:(id)a0;
- (void)_initializeDatabaseStartup;
- (void)_initializeSystemGroups;
- (id)punctuationEntriesForGroupUUID:(id)a0;
- (void)_initializeCloudKitHelpers;
- (void)_updateCloudKitHelpers;
- (id)nextDefaultGroupName;
- (id)_databaseDirectoryPath;
- (id)_databaseFilePath;
- (void)userAuthChanged;
- (void)_setupDatabase;
- (BOOL)_saveIfPossible;
- (BOOL)isBasePunctuationGroup:(id)a0;
- (void)addCloudRecordToPurge:(id)a0 recordEntityType:(id)a1;
- (id)cloudRecordsToPurge:(id)a0;
- (void)removeAllRecordsForPurge;
- (void)removeCloudRecordForPurge:(id)a0;
- (id)parentPunctuationGroup:(id)a0;
- (id)mostBasePunctuationGroupForGroup:(id)a0;
- (id)_punctuationGroupForEntry:(id)a0;
- (void)importPunctuationGroup:(id)a0;
- (id)punctuationEntryObjectFromLocalObjects:(id)a0;
- (void)updatePunctuationGroup:(id)a0;
- (void)updatePunctuationGroup:(id)a0 fromCloudKit:(BOOL)a1;
- (void)removePunctuationGroup:(id)a0;
- (id)_punctuationEntryFromManagedObject:(id)a0;
- (id)_punctuationGroupFromManagedObject:(id)a0;
- (id)punctuationGroupsForContexts;
- (void)_filterAutoswitchContexts:(id)a0 punctuationGroupsForContexts:(id)a1;
- (id)punctuationEntryForUUID:(id)a0;
- (id)punctuationGroupForUUID:(id)a0;
- (id)ruleToString:(long long)a0;
- (long long)stringToRule:(id)a0;
- (void)updateEntry:(id)a0 fromCloudKit:(BOOL)a1;
- (void)removeEntry:(id)a0;
- (id)allPunctuationGroup;
- (id)somePunctuationGroup;
- (id)nonePunctuationGroup;

@end
