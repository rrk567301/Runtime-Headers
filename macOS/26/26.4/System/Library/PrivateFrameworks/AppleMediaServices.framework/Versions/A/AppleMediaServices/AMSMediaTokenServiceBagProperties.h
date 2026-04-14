@class NSArray, NSDictionary;

@interface AMSMediaTokenServiceBagProperties : NSObject

@property (readonly, nonatomic) NSArray *anonymousRateLimitingClientIds;
@property (readonly, nonatomic) NSDictionary *anonymousRateLimitingClientChallenges;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) double refreshPercentage;
@property (readonly, nonatomic) double refreshTime;

- (void).cxx_destruct;
- (id)initWithEnabled:(BOOL)a0 refreshPercentage:(double)a1 refreshTime:(double)a2 anonymousRateLimitingClientIds:(id)a3 anonymousRateLimitingClientChallenges:(id)a4;

@end
