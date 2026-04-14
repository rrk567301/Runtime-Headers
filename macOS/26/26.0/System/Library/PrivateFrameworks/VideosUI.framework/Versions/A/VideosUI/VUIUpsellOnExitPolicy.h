@class NSNumber, NSArray;

@interface VUIUpsellOnExitPolicy : NSObject

@property (nonatomic) long long thresholdValueType;
@property (retain, nonatomic) NSNumber *playbackThreshold;
@property (retain, nonatomic) NSArray *rateLimitPolicies;
@property (nonatomic) BOOL showUpsell;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
