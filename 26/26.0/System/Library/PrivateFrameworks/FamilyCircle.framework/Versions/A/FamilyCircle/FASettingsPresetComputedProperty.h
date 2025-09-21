@class NSArray, NSSet;

@interface FASettingsPresetComputedProperty : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ conditions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSArray *conditions;
@property (nonatomic, readonly) NSSet *dependencies;

- (id)initWithDictionary:(id)a0;
- (id)initWithConditions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)computedValueWithValueProvider:(id /* block */)a0;

@end
