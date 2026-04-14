@class NSString;

@interface IRServiceToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) long long servicePackage;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServiceIdentifier:(id)a0 servicePackage:(long long)a1;

@end
