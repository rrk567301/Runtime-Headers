@class NSDictionary;

@interface FASettingsPresetConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *values;
@property (readonly, copy, nonatomic) NSDictionary *computedProperties;

+ (id)boolKeys;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)allValues;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithValues:(id)a0;
- (id)allValuesWithUserValueProvider:(id /* block */)a0;
- (id)initWithValues:(id)a0 computedProperties:(id)a1;
- (char)isValidBoolValue:(id)a0;
- (char)isValidTriState:(id)a0;
- (id)presetValueForKey:(id)a0;
- (id)presetValueForKey:(id)a0 userValueProvider:(id /* block */)a1;
- (id)validatedValuesFromValues:(id)a0;

@end
