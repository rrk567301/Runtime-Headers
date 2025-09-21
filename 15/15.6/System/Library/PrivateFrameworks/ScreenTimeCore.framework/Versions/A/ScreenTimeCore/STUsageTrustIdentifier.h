@class NSString;

@interface STUsageTrustIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly) char usageTrusted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_stUsageTrustIdentifierCommonInitWithIdentifier:(id)a0 usageTrusted:(char)a1;
- (id)initWithIdentifier:(id)a0 usageTrusted:(char)a1;

@end
