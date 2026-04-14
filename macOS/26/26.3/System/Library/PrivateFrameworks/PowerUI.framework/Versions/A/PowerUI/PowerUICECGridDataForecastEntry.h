@class NSNumber, NSDate;

@interface PowerUICECGridDataForecastEntry : NSObject

@property (retain, nonatomic) NSDate *forecastDate;
@property (retain, nonatomic) NSNumber *forecastValue;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDate:(id)a0 forecastValue:(id)a1;

@end
