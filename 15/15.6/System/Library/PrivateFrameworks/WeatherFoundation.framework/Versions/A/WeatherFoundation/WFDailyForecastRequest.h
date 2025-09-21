@class NSLocale;

@interface WFDailyForecastRequest : WFAggregateForecastRequest

@property (retain, nonatomic) NSLocale *locale;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 completionHandler:(id /* block */)a1;
- (void)startWithService:(id)a0;

@end
