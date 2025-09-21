@class NSString, NSUUID;

@interface WFExecutableAppShortcutIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *basePhraseTemplate;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSUUID *parameterIdentifier;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 basePhraseTemplate:(id)a1 actionIdentifier:(id)a2 parameterIdentifier:(id)a3;

@end
