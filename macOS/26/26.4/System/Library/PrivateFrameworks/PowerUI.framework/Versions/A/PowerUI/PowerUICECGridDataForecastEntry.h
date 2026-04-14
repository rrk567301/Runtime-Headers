@class NSNumber, NSDate;

@interface PowerUICECGridDataForecastEntry : NSObject

@property (retain, nonatomic) NSDate *forecastDate;
@property (retain, nonatomic) NSNumber *forecastValue;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithDate:(id)a0 forecastValue:(id)a1;

@end
