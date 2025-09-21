@class NSData, WFWeatherConditions;

@interface WFForecastResponse : WFResponse <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) WFWeatherConditions *forecast;
@property (nonatomic) unsigned long long forecastType;
@property (nonatomic) char responseWasFromCache;
@property (retain, nonatomic) NSData *rawAPIData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
