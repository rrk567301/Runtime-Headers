@class NSData;

@interface IDSEndpointTransparencyState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) long long verificationState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPushToken:(id)a0 verificationState:(long long)a1;
- (char)isEqualToEndpointTransparencyState:(id)a0;

@end
