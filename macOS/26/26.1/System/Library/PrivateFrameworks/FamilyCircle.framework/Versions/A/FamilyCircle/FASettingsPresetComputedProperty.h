@class NSArray, NSSet;

@interface FASettingsPresetComputedProperty : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ conditions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSArray *conditions;
@property (nonatomic, readonly) NSSet *dependencies;

- (id)initWithConditions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)computedValueWithValueProvider:(id /* block */)a0;

@end
