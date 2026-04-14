@class NSString, NSMutableArray;

@interface TMInProgressContainer : TMMonoStructure <TMWritableBackupProvider> {
    NSMutableArray *_eventTreeFileNames;
    NSString *_backupLogFileName;
}

+ (id)structureType;
+ (id)annotatedStateAtURL:(id)a0;
+ (id)URLForBuildUnderURL:(id)a0 error:(id *)a1;
+ (id)_containerNameWithDate:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)buildAtURL:(id)a0 parentURL:(id)a1 error:(id *)a2;
- (long long)refreshFromDisk;
- (BOOL)prepareForReuse:(id *)a0;
- (id)sortedWritableBackupsWithState:(unsigned long long)a0;
- (id)latestWritableBackupWithState:(unsigned long long)a0;
- (BOOL)_updateContainerTimestamp:(id *)a0;
- (BOOL)updateContainerWithDate:(id)a0 error:(id *)a1;
- (id)deleteFromDiskWithCancelBlock:(id /* block */)a0 error:(id *)a1;

@end
