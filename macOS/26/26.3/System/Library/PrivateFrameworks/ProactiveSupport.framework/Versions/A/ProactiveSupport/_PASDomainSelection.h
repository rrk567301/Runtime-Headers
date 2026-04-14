@interface _PASDomainSelection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)count;
- (id)initWithDomain:(id)a0;
- (id)globPatterns;
- (id)initWithDomainsFromArray:(id)a0;
- (id)initWithDomainsFromSet:(id)a0;
- (BOOL)isEmpty;
- (id)allDomains;
- (id)description;
- (id)init;
- (BOOL)containsDomain:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
