@class NSDictionary, BMSQLDatabase;

@interface FedStatsPluginSQL : NSObject

@property (retain, nonatomic) NSDictionary *accessInformation;
@property (retain, nonatomic) BMSQLDatabase *database;

- (void).cxx_destruct;
- (id)initWithError:(id *)a0;
- (id)accessedStreams;
- (id)accessedColumnsForStream:(id)a0;
- (id)runQuery:(id)a0 withError:(id *)a1;

@end
