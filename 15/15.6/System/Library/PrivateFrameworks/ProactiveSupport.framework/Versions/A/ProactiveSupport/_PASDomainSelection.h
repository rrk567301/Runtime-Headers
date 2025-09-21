@interface _PASDomainSelection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (char)isEmpty;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0;
- (char)containsDomain:(id)a0;
- (id)allDomains;
- (id)initWithDomainsFromArray:(id)a0;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (id)globPatterns;
- (id)initWithDomainsFromSet:(id)a0;
- (char)isEqualToDomainSelection:(id)a0;

@end
