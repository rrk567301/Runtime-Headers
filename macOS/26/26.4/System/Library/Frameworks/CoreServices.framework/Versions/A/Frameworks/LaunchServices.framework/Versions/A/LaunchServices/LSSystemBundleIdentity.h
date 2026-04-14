@class NSString;

@interface LSSystemBundleIdentity : LSBundleIdentity {
    NSString *_bundleIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithBundleIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)bundleIdentifier;
- (id)initWithIdentityString:(id)a0 parsedIdentityStringDictionary:(id)a1 error:(id *)a2;

@end
