@interface LSPrecondition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)emptyPrecondition;
+ (id)preconditionCheckingRelationshipToURL:(id)a0 ofBundleWithIdentifier:(id)a1 placeholderFetchBehavior:(long long)a2 requiredRelationship:(long long)a3;
+ (id)registrationStatePreconditionForBundleWithIdentifier:(id)a0 placeholderInstalled:(id)a1 fullApplicationInstalled:(id)a2;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isMet;

@end
