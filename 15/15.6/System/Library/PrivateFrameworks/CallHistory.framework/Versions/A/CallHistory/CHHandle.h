@class NSString;

@interface CHHandle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *normalizedValue;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *value;

+ (id)normalizedEmailAddressHandleForValue:(id)a0;
+ (id)normalizedGenericHandleForValue:(id)a0;
+ (id)normalizedPhoneNumberHandleForValue:(id)a0 isoCountryCode:(id)a1;
+ (long long)handleTypeForValue:(id)a0;
+ (id)normalizedHandleWithType:(long long)a0 value:(id)a1 isoCountryCode:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHandle:(id)a0;
- (char)isTemporary;
- (char)isEqualToHandle:(id)a0;
- (id)initWithType:(long long)a0 value:(id)a1;
- (id)initWithType:(long long)a0 value:(id)a1 normalizedValue:(id)a2;
- (char)isPseudonym;

@end
