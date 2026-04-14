@class NSUUID, NSString;

@interface _HMDAccountIdentifier : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *kind;
@property (readonly, getter=isAuthenticated) BOOL authenticated;
@property (readonly, copy) NSString *senderCorrelationIdentifier;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
