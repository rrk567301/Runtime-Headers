@class NSString, NSDictionary;

@interface KNAnimationAttributes : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *effect;
@property (readonly, nonatomic) NSDictionary *attributes;

+ (id)supportedCustomAttributes;
+ (BOOL)customAttributeKeyIsValid:(id)a0;
+ (id)attributesWithEffect:(id)a0 attributes:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)containsAttributeForKey:(id)a0;
- (id)initWithEffect:(id)a0 attributes:(id)a1;
- (id)attributesByAddingAttributes:(id)a0;
- (id)attributesBySettingValue:(id)a0 forAttributeKey:(id)a1;
- (id)attributesByChangingEffectToEffect:(id)a0;
- (id)attributesByAddingAttributesFromDictionary:(id)a0;
- (id)attributesByRemovingAttributeForKey:(id)a0;
- (id)valueForAttributeKey:(id)a0;
- (id)attributesAdjustedForTheme:(id)a0;
- (id)attributesByUpdatingThemeCurveNamesWithOldToNewCurveNameMap:(id)a0;
- (id)p_curveForNameKey:(id)a0 forTheme:(id)a1;

@end
