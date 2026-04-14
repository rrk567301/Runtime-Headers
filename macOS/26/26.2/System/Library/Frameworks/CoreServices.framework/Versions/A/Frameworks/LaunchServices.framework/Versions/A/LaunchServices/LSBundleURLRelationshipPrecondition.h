@class NSURL, NSString;

@interface LSBundleURLRelationshipPrecondition : LSPrecondition {
    NSURL *_url;
    NSString *_bundleIdentifier;
    long long _placeholderFetchBehavior;
    long long _requiredRelationship;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:(id)a0 bundleIdentifier:(id)a1 placeholderFetchBehavior:(long long)a2 requiredRelationship:(long long)a3;
- (BOOL)isMet;

@end
