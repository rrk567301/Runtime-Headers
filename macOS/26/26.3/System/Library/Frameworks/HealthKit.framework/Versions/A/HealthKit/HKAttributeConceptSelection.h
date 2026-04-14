@protocol NSCopying, NSSecureCoding, NSObject;

@interface HKAttributeConceptSelection : HKConceptSelection

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long operatorType;
@property (readonly, copy, nonatomic) id<NSCopying, NSSecureCoding, NSObject> value;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAttribute:(long long)a0 operatorType:(unsigned long long)a1 value:(id)a2;

@end
