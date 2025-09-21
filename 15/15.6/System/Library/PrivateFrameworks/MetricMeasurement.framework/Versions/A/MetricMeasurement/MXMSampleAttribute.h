@class NSString, NSNumber;

@interface MXMSampleAttribute : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long valueType;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSNumber *numericValue;
@property (readonly, copy, nonatomic) id value;

+ (id)attributeWithName:(id)a0 stringValue:(id)a1;
+ (id)attributeWithName:(id)a0;
+ (id)attributeWithName:(id)a0 numericValue:(id)a1;
+ (id)attributeWithName:(id)a0 valueType:(long long)a1;
+ (id)attributeWithName:(id)a0 valueType:(long long)a1 value:(id)a2;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualTo:(id)a0;
- (id)initWithAttributeName:(id)a0;
- (id)initWithAttributeName:(id)a0 numericValue:(id)a1;
- (id)initWithAttributeName:(id)a0 stringValue:(id)a1;
- (id)initWithAttributeName:(id)a0 valueType:(long long)a1;
- (id)initWithAttributeName:(id)a0 valueType:(long long)a1 value:(id)a2;
- (char)isEqualToAttribute:(id)a0;

@end
