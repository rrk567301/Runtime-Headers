@class NSString, NSObject;
@protocol NSSecureCoding, NSCopying;

@interface PPLabeledValue : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSObject<NSCopying, NSSecureCoding> *value;

+ (id)labeledValueWithLabel:(id)a0 value:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (char)isEqualToLabeledValue:(id)a0;

@end
