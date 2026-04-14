@class LNActionSideEffectBehavior;

@interface LNActionSideEffect : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long effect;
@property (readonly, nonatomic) long long changeEffect;
@property (readonly, nonatomic) LNActionSideEffectBehavior *behavior;

+ (id)noneSideEffect;
+ (id)sideEffectWithChangeEffect:(long long)a0;
+ (id)sideEffectWithChangeEffect:(long long)a0 behavior:(id)a1;
+ (id)unknownSideEffect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithSideEffect:(long long)a0 changeEffect:(long long)a1;
- (id)initWithSideEffect:(long long)a0 changeEffect:(long long)a1 behavior:(id)a2;

@end
