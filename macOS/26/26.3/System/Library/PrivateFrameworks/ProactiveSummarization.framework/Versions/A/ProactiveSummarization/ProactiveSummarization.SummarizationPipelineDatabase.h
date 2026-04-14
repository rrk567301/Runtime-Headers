@interface ProactiveSummarization.SummarizationPipelineDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ database;
}

- (id)databaseHandle;
- (id)migrations;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;

@end
