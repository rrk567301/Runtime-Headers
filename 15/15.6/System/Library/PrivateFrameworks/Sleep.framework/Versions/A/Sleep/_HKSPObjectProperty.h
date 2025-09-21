@class NSArray;

@interface _HKSPObjectProperty : HKSPProperty

@property (readonly, nonatomic) NSArray *expectedValueClasses;

+ (char)supportsSecureCoding;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)decodeValueForObject:(id)a0 fromCoder:(id)a1;
- (void)encodeValueForObject:(id)a0 fromCoder:(id)a1;
- (id)allowedInnerClassesForSecureCoding;
- (void)copyValueFromObject:(id)a0 toObject:(id)a1;
- (id)initWithIdentifier:(id)a0 propertyName:(id)a1 expectedValueClass:(Class)a2;
- (id)initWithIdentifier:(id)a0 propertyName:(id)a1 expectedValueClasses:(id)a2;

@end
