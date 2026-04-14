@class NSString;

@interface LNDaemonApplicationIdentifierRequest : LNDaemonApplicationRequest <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 frameworkBundles:(id)a2;

@end
