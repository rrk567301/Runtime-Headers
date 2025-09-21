@class NSString;

@interface USTrustIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly) char trusted;

+ (id)identifierWithIdentifier:(id)a0 trusted:(char)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_USTrustIdentifierCommonInitWithIdentifier:(id)a0 trusted:(char)a1;
- (id)initWithIdentifier:(id)a0 trusted:(char)a1;

@end
