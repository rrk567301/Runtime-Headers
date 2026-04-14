@interface ProactiveSummarization.SummarizationPipelineDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ database;
}

- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (id)databaseHandle;
- (void).cxx_destruct;
- (id)init;
- (id)migrations;
- (void)dealloc;

@end
