@class NSString;

@interface RSTextCoachingSignal : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) long long state;
@property (nonatomic) float score;
@property (readonly, nonatomic) NSString *text;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 score:(float)a1;
- (id)initWithType:(long long)a0 state:(long long)a1 score:(float)a2;

@end
