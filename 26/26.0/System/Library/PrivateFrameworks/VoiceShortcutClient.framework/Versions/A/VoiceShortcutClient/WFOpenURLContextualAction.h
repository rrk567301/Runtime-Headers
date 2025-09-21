@class NSURL, NSString;

@interface WFOpenURLContextualAction : WFContextualAction

@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_staticDisplayStringForDecoding;
- (id)initWithURL:(id)a0 bundleIdentifier:(id)a1 actionTitle:(id)a2;

@end
