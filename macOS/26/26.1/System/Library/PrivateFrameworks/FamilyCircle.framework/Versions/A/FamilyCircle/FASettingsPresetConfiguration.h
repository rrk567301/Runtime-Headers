@class NSDictionary;

@interface FASettingsPresetConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *values;
@property (readonly, copy, nonatomic) NSDictionary *computedProperties;

+ (id)boolKeys;

- (unsigned long long)hash;
- (id)initWithValues:(id)a0;
- (id)allValues;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)allValuesWithUserValueProvider:(id /* block */)a0;
- (id)initWithValues:(id)a0 computedProperties:(id)a1;
- (BOOL)isValidBoolValue:(id)a0;
- (BOOL)isValidTriState:(id)a0;
- (id)presetValueForKey:(id)a0;
- (id)presetValueForKey:(id)a0 userValueProvider:(id /* block */)a1;
- (id)validatedValuesFromValues:(id)a0;

@end
