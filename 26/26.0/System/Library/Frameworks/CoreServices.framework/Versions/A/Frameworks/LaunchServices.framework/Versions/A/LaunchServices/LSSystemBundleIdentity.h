@class NSString;

@interface LSSystemBundleIdentity : LSBundleIdentity {
    NSString *_bundleIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithBundleIdentifier:(id)a0;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentityString:(id)a0 parsedIdentityStringDictionary:(id)a1 error:(id *)a2;

@end
