@interface ProactiveSummarization.SummarizationPipelineDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ database;
}

- (id)migrations;
- (void).cxx_destruct;
- (id)databaseHandle;
- (id)init;
- (void)dealloc;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;

@end
