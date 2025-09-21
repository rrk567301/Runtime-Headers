@protocol NSCopying, NSSecureCoding, NSObject;

@interface HKAttributeConceptSelection : HKConceptSelection

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long operatorType;
@property (readonly, copy, nonatomic) id<NSCopying, NSSecureCoding, NSObject> value;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAttribute:(long long)a0 operatorType:(unsigned long long)a1 value:(id)a2;

@end
