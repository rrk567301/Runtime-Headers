@class NSDictionary;

@interface CWFAutoJoinThrottle : NSObject <NSCopying>

@property (nonatomic) long long trigger;
@property (retain, nonatomic) NSDictionary *intervals;

+ (id)autoJoinThrottleWithTrigger:(long long)a0 intervals:(id)a1;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
