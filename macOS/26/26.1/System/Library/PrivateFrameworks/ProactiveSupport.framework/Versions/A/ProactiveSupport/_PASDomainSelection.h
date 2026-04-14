@interface _PASDomainSelection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (id)allDomains;
- (id)initWithDomain:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDomainsFromSet:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmpty;
- (id)globPatterns;
- (id)initWithDomainsFromArray:(id)a0;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (BOOL)containsDomain:(id)a0;
- (id)init;

@end
