@class NSDictionary;

@interface MLRTaskParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *recipeUserInfo;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)boolValueForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (double)doubleValueForKey:(id)a0 defaultValue:(double)a1;
- (id)stringValueForKey:(id)a0 defaultValue:(id)a1;
- (float)floatValueForKey:(id)a0 defaultValue:(float)a1;
- (long long)integerValueForKey:(id)a0 defaultValue:(long long)a1;
- (unsigned long long)unsignedIntegerValueForKey:(id)a0 defaultValue:(unsigned long long)a1;
- (id)initWithParametersDict:(id)a0;
- (id)initWithDESRecipe:(id)a0;

@end
