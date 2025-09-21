@class NSUUID, NSString;

@interface _HMDAccountIdentifier : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *kind;
@property (readonly, getter=isAuthenticated) char authenticated;
@property (readonly, copy) NSString *senderCorrelationIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;

@end
