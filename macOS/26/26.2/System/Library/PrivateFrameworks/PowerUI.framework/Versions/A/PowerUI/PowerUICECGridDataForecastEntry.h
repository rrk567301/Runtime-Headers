@class NSNumber, NSDate;

@interface PowerUICECGridDataForecastEntry : NSObject

@property (retain, nonatomic) NSDate *forecastDate;
@property (retain, nonatomic) NSNumber *forecastValue;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDate:(id)a0 forecastValue:(id)a1;

@end
