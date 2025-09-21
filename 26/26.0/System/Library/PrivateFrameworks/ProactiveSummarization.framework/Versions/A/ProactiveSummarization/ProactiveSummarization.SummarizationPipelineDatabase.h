@interface ProactiveSummarization.SummarizationPipelineDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ database;
}

- (void)dealloc;
- (id)migrations;
- (id)init;
- (id)databaseHandle;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (void).cxx_destruct;

@end
