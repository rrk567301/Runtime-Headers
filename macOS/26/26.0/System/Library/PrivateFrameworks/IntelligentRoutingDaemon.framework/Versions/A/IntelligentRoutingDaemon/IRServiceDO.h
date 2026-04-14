@class NSString, NSDate;

@interface IRServiceDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *lastSeenDate;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) long long servicePackage;

+ (id)serviceDOWithLastSeenDate:(id)a0 clientIdentifier:(id)a1 serviceIdentifier:(id)a2 servicePackage:(long long)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementClientIdentifier:(id)a0;
- (id)copyWithReplacementLastSeenDate:(id)a0;
- (id)copyWithReplacementServiceIdentifier:(id)a0;
- (id)copyWithReplacementServicePackage:(long long)a0;
- (id)initWithLastSeenDate:(id)a0 clientIdentifier:(id)a1 serviceIdentifier:(id)a2 servicePackage:(long long)a3;
- (BOOL)isEqualToServiceDO:(id)a0;

@end
