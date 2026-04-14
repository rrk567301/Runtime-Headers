@interface RSDriftDetectionSignal : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) float score;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 score:(float)a1;

@end
