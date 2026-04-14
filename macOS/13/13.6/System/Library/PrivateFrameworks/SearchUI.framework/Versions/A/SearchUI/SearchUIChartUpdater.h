@class NSURLSession, NSString, SearchUIStockChartData, SearchUIStock;
@protocol SearchUIChartUpdaterDelegate;

@interface SearchUIChartUpdater : SearchUIYQLRequest {
    SearchUIStock *_stock;
    long long _interval;
    SearchUIStockChartData *_currentChartData;
}

@property (retain, nonatomic) NSURLSession *session;
@property (nonatomic) double highValue;
@property (nonatomic) double lowValue;
@property (retain, nonatomic) NSString *createdValue;
@property (weak, nonatomic) id<SearchUIChartUpdaterDelegate> delegate;

+ (id)_rangeStringForInterval:(long long)a0;

- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (void)cancel;
- (void)parseData:(id)a0;
- (id)aggregateDictionaryDomain;
- (void)didParseData;
- (BOOL)updateChartUsingParsecURL:(id)a0 forStock:(id)a1 interval:(long long)a2;

@end
