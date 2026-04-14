@class NSString, NSArray;

@interface CalFileCDChangeTracker : CalAbstractCDChangeTracker {
    NSString *basePath;
    NSArray *fileNamesBeingProcessed;
}

- (void)dealloc;
- (id)init;
- (void)setBasePath:(id)a0;
- (void)insureDirectoryAtPath:(id)a0;
- (id)getFileNames;
- (void)mergeChangesFrom:(id)a0 to:(id)a1;
- (id)tempFile;
- (void)deleteFiles:(id)a0;
- (id)dictionaryFromFile:(id)a0;
- (BOOL)getAllChanges;
- (void)storeChanges:(id)a0;
- (void)clearAllStoredChanges;
- (void)clearProcessedChanges;

@end
