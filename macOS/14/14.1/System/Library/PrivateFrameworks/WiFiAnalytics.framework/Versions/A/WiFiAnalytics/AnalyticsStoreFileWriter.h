@class AnalyticsStoreMOHandler;

@interface AnalyticsStoreFileWriter : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *managedObjectHandler;

- (id)init;
- (void).cxx_destruct;
- (id)analyticsStoreFileWriterDirectory;
- (id)analyticsStoreFileWriterFilePath;
- (id)batchedWriteAnalyticsStoreToFile:(unsigned long long)a0 maxAge:(unsigned long long)a1;
- (id)batchedWriteAnalyticsStoreToFileWithBatchSize:(unsigned long long)a0 maxAge:(unsigned long long)a1;
- (id)initWithAnalyticsStore:(id)a0;
- (id)relationshipKeyPathsForPrefetching:(id)a0;
- (void)stringifyManagedObjectsArray:(id)a0 titleString:(id *)a1 dataStringsArray:(id *)a2;
- (id)stringifyObjectWithPadding:(id)a0 padding:(id)a1 padToLength:(unsigned long long)a2;
- (id)stringifyRelationship:(id)a0 name:(id *)a1;
- (id)stringifyValueArray:(id)a0;
- (id)writeAnalyticsStoreToFile;
- (id)writeArrayToJSONFile:(id)a0;
- (id)writeDeploymentGraphToFile;
- (id)writeDictionaryToJSONFile:(id)a0 network:(id)a1;

@end
