@class NSURLSession, NSString, Stock, StockChartData;
@protocol ChartUpdaterDelegate;

@interface ChartUpdater : YQLRequest {
    Stock *_stock;
    long long _interval;
    StockChartData *_currentChartData;
}

@property (retain, nonatomic) NSURLSession *session;
@property (nonatomic) double highValue;
@property (nonatomic) double lowValue;
@property (retain, nonatomic) NSString *createdValue;
@property (weak, nonatomic) id<ChartUpdaterDelegate> delegate;

+ (id)_rangeStringForInterval:(long long)a0;

- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (void)cancel;
- (void)parseData:(id)a0;
- (void)didParseData;
- (id)aggregateDictionaryDomain;
- (BOOL)updateChartUsingParsecURL:(id)a0 forStock:(id)a1 interval:(long long)a2;
- (BOOL)updateChartForStock:(id)a0 interval:(long long)a1;

@end
