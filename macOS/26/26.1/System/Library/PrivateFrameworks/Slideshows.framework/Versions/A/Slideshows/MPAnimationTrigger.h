@class NSString, NSMutableDictionary;

@interface MPAnimationTrigger : MPAction

@property (copy, nonatomic) NSString *animationKey;
@property (copy, nonatomic) NSMutableDictionary *animationAttributes;

+ (BOOL)supportsSecureCoding;
+ (id)animationTrigger;

- (void)setAction:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)animationAttributeForKey:(id)a0;

@end
