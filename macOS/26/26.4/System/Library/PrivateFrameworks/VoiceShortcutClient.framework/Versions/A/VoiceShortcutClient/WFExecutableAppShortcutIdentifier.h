@class NSString, NSUUID;

@interface WFExecutableAppShortcutIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *basePhraseTemplate;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSUUID *parameterIdentifier;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 basePhraseTemplate:(id)a1 actionIdentifier:(id)a2 parameterIdentifier:(id)a3;

@end
