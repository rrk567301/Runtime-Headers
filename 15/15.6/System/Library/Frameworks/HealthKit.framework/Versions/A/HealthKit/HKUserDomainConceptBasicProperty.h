@class NSString, NSUUID, NSData, NSDate, NSNumber;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface HKUserDomainConceptBasicProperty : HKUserDomainConceptProperty

@property (readonly, copy, nonatomic) id<NSCopying, NSSecureCoding, NSObject> value;
@property (readonly, nonatomic) long long valueType;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, copy, nonatomic) NSDate *dateValue;
@property (readonly, copy, nonatomic) NSUUID *UUIDValue;
@property (readonly, copy, nonatomic) NSData *dataValue;

+ (char)supportsSecureCoding;
+ (id)nullPropertyWithType:(long long)a0 version:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueDescription;
- (id)initWithType:(long long)a0 version:(long long)a1 boolValue:(char)a2;
- (id)initWithType:(long long)a0 version:(long long)a1 dateValue:(id)a2;
- (id)initWithType:(long long)a0 version:(long long)a1 UUIDValue:(id)a2;
- (id)initWithType:(long long)a0 version:(long long)a1 dataValue:(id)a2;
- (id)_valueDescription;
- (id)initWithType:(long long)a0 version:(long long)a1 doubleValue:(double)a2;
- (id)initWithType:(long long)a0 version:(long long)a1 integerValue:(long long)a2;
- (id)initWithType:(long long)a0 version:(long long)a1 stringValue:(id)a2;
- (id)initWithType:(long long)a0 version:(long long)a1 timestamp:(double)a2 deleted:(char)a3;
- (id)initWithType:(long long)a0 version:(long long)a1 timestamp:(double)a2 valueType:(long long)a3 value:(id)a4;
- (id)initWithType:(long long)a0 version:(long long)a1 value:(id)a2;

@end
