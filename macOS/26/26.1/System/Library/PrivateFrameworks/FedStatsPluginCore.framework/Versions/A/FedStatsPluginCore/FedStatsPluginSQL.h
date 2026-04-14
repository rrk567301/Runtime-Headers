@class NSDictionary, BMSQLDatabase;

@interface FedStatsPluginSQL : NSObject

@property (retain, nonatomic) NSDictionary *accessInformation;
@property (retain, nonatomic) BMSQLDatabase *database;

- (id)initWithError:(id *)a0;
- (void).cxx_destruct;
- (id)accessedStreams;
- (id)accessedColumnsForStream:(id)a0;
- (id)runQuery:(id)a0 withError:(id *)a1;

@end
