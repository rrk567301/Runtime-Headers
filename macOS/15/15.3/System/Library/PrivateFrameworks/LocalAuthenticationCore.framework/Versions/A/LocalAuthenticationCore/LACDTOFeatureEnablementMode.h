@interface LACDTOFeatureEnablementMode : NSObject

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isGracePeriodEnabled;
@property (readonly, nonatomic) long long rawValue;

+ (id)enabled;
+ (id)disabled;
+ (id)enabledWithGracePeriod;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIsEnabled:(BOOL)a0 isGracePeriodEnabled:(BOOL)a1 rawValue:(long long)a2;

@end
