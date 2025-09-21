@protocol WFSettings;

@interface WFRequestFormattingRules : NSObject

@property (readonly, nonatomic) id<WFSettings> settings;

+ (char)aqiEnabledByRules:(id)a0 forLocation:(id)a1;

- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (char)aqiEnabledForCountryCode:(id)a0;
- (long long)locationNumDecimalsOfPrecision;

@end
