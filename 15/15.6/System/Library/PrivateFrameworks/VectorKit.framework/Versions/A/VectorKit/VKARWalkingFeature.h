@interface VKARWalkingFeature : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long intraFeaturePriority;

- (char)isEqual:(id)a0;
- (id)initWithType:(long long)a0;
- (id)initWithType:(long long)a0 intraFeaturePriority:(unsigned long long)a1;

@end
