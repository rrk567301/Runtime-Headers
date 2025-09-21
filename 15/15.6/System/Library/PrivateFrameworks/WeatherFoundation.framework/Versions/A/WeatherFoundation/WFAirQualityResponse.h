@class NSData, WFAirQualityConditions;

@interface WFAirQualityResponse : WFResponse <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char responseWasFromCache;
@property (retain, nonatomic) NSData *rawAPIData;
@property (retain, nonatomic) WFAirQualityConditions *airQualityConditions;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
