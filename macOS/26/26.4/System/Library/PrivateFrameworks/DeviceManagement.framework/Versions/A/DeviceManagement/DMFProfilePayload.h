@class NSString;

@interface DMFProfilePayload : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long payloadVersion;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *organization;
@property (readonly, copy, nonatomic) NSString *payloadDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(id)a0 identifier:(id)a1 payloadVersion:(long long)a2 displayName:(id)a3 organization:(id)a4 payloadDescription:(id)a5;

@end
