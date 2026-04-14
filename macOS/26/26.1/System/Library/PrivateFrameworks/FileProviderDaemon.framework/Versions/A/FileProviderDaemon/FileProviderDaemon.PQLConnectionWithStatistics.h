@interface FileProviderDaemon.PQLConnectionWithStatistics : PQLConnection {
    void /* unknown type, empty encoding */ dbStatistics;
    void /* unknown type, empty encoding */ maxQueryExecutionTime;
}

- (void).cxx_destruct;
- (id)init;

@end
