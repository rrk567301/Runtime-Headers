@class NSSet, NSString, NSArray, NSNumber;

@interface MXMSampleAttributeFilter : MXMSampleAttribute <NSCopying, NSSecureCoding> {
    NSArray *_matchingStringAttributeValues;
    NSArray *_matchingNumericAttributeValues;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char finite;
@property (readonly, nonatomic, getter=finite) char isFinite;
@property (readonly, copy, nonatomic) id value;
@property (readonly, copy, nonatomic) NSSet *values;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSNumber *numericValue;
@property (readonly, copy, nonatomic) NSSet *stringValues;
@property (readonly, copy, nonatomic) NSSet *numericValues;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_matchesSampleAttributeNameWithName:(id)a0;
- (char)_matchesSampleAttributeValueTypeWithAttributeValueType:(long long)a0;
- (char)_matchesSampleAttributeValueWithValue:(id)a0;
- (id)initWithAttribute:(id)a0;
- (id)initWithAttributeName:(id)a0 numericValue:(id)a1;
- (id)initWithAttributeName:(id)a0 numericValues:(id)a1;
- (id)initWithAttributeName:(id)a0 stringValue:(id)a1;
- (id)initWithAttributeName:(id)a0 stringValues:(id)a1;
- (id)initWithAttributeName:(id)a0 valueType:(long long)a1 value:(id)a2;
- (char)matchesSampleWithAttribute:(id)a0;

@end
