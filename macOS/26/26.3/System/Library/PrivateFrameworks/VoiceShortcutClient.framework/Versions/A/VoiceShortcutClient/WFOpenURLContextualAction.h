@class NSURL, NSString;

@interface WFOpenURLContextualAction : WFContextualAction

@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)uniqueIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_staticDisplayStringForDecoding;
- (id)initWithURL:(id)a0 bundleIdentifier:(id)a1 actionTitle:(id)a2;

@end
