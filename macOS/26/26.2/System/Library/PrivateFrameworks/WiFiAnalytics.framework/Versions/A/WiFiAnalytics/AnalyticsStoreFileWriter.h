@class WAPersistentContainer, NSDateFormatter;

@interface AnalyticsStoreFileWriter : NSObject {
    NSDateFormatter *_dateFormatter;
}

@property (retain, nonatomic) WAPersistentContainer *persistentContainer;

+ (BOOL)writeData:(id)a0 toFile:(id)a1;
+ (id)analyticsStoreFileWriterDirectory;
+ (id)writeObj:(id)a0 toJSONFile:(id)a1;

- (id)moc;
- (id)batchedWriteAnalyticsStoreToFile:(unsigned long long)a0 maxAge:(unsigned long long)a1;
- (id)writeAnalyticsStoreToFile;
- (id)batchedWriteAnalyticsStoreToCSVFilesWithBatchSize:(unsigned long long)a0 maxAge:(unsigned long long)a1;
- (id)writeDictionaryToJSONFile:(id)a0 network:(id)a1;
- (id)writeArrayToJSONFile:(id)a0;
- (void)writeRelationshipsHeaders:(id)a0 ofEntity:(id)a1 with:(id)a2;
- (void)initDateFormatter;
- (id)analyticsStoreFileWriterFilePath;
- (id)writeDeploymentGraphToFile;
- (void)stringifyManagedObjectsArray:(id)a0 titleString:(id *)a1 dataStringsArray:(id *)a2 onMoc:(id)a3;
- (id)initWithPersistentContainer:(id)a0;
- (id)stringifyRelationship:(id)a0 name:(id *)a1 onMoc:(id)a2;
- (void)writeAttributes:(id)a0 fromObject:(id)a1 ofEntity:(id)a2 withWriter:(id)a3;
- (id)relationshipKeyPathsForPrefetching:(id)a0;
- (id)exportEntityToCSV:(id)a0 batchSize:(unsigned long long)a1 maxAge:(unsigned long long)a2 toURL:(id)a3 fileDate:(id)a4;
- (id)mom;
- (void).cxx_destruct;
- (id)stringifyObjectWithPadding:(id)a0 padding:(id)a1 padToLength:(unsigned long long)a2;
- (void)writeRelationships:(id)a0 fromObject:(id)a1 ofEntity:(id)a2 with:(id)a3;
- (id)stringifyValueArray:(id)a0;
- (id)batchedWriteAnalyticsStoreToFileWithBatchSize:(unsigned long long)a0 maxAge:(unsigned long long)a1;

@end
