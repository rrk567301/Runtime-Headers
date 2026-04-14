@interface NSFileProviderDomainVersion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long version;

+ (id)domainVersionWithVersion:(long long)a0;

- (id)next;
- (long long)compare:(id)a0;
- (id)initWithVersion:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
