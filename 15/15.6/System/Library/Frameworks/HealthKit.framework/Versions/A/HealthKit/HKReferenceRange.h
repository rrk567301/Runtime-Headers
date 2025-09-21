@class NSString, HKInspectableValueCollection;

@interface HKReferenceRange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *referenceRangeIdentifier;
@property (readonly, nonatomic) HKInspectableValueCollection *valueRange;

+ (id)referenceRangeWithIdentifier:(id)a0 inspectableValueRange:(id)a1;
+ (id)referenceRangeWithIdentifier:(id)a0 maxValue:(id)a1;
+ (id)referenceRangeWithIdentifier:(id)a0 minValue:(id)a1;
+ (id)referenceRangeWithIdentifier:(id)a0 minValue:(id)a1 maxValue:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
