@class FACommunicationSafety, NSDictionary, FAAppAndWebActivity, FACommunicationLimits, FAScreenDistance, NSNumber;

@interface FASettingsPresetConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *values;
@property (readonly, copy, nonatomic) NSDictionary *computedProperties;
@property (readonly, nonatomic) FACommunicationLimits *communicationLimits;
@property (readonly, nonatomic) FACommunicationSafety *communicationSafety;
@property (readonly, nonatomic) FAAppAndWebActivity *appAndWebActivity;
@property (readonly, nonatomic) FAScreenDistance *screenDistance;
@property (readonly, nonatomic) NSNumber *strictPolicy;

+ (id)boolKeys;

- (id)description;
- (id)allValues;
- (id)initWithValues:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)allValuesWithUserValueProvider:(id /* block */)a0;
- (id)initWithValues:(id)a0 computedProperties:(id)a1;
- (id)initWithValues:(id)a0 computedProperties:(id)a1 communicationLimits:(id)a2 communicationSafety:(id)a3 appAndWebActivity:(id)a4 screenDistance:(id)a5 strictPolicy:(id)a6;
- (BOOL)isValidBoolValue:(id)a0;
- (BOOL)isValidTriState:(id)a0;
- (id)presetValueForKey:(id)a0;
- (id)presetValueForKey:(id)a0 userValueProvider:(id /* block */)a1;
- (id)validatedValuesFromValues:(id)a0;

@end
