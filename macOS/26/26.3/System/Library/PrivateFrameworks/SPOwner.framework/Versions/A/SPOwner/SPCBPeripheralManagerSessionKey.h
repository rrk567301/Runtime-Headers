@class NSUUID, NSString;

@interface SPCBPeripheralManagerSessionKey : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *userIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleId;

- (id)description;
- (id)initWithUserIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
