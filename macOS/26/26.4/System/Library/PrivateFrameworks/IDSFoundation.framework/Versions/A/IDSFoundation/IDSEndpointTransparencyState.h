@class NSData;

@interface IDSEndpointTransparencyState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) long long verificationState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPushToken:(id)a0 verificationState:(long long)a1;
- (BOOL)isEqualToEndpointTransparencyState:(id)a0;

@end
