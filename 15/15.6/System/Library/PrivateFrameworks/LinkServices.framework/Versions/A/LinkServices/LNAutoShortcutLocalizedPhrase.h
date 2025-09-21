@class NSString, NSUUID, NSXPCConnection;

@interface LNAutoShortcutLocalizedPhrase : NSObject <NSSecureCoding> {
    NSXPCConnection *_connection;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedPhrase;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *basePhraseTemplate;
@property (readonly, copy, nonatomic) NSUUID *parameterIdentifier;
@property (readonly, copy, nonatomic) NSString *optionsCollectionTitle;
@property (readonly, copy, nonatomic) NSString *optionsCollectionSystemImageName;
@property (readonly, nonatomic, getter=isPrimary) char primary;
@property (readonly, nonatomic) NSString *signature;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocalizedPhrase:(id)a0 bundleIdentifier:(id)a1 basePhraseTemplate:(id)a2 parameterIdentifier:(id)a3;
- (id)initWithLocalizedPhrase:(id)a0 bundleIdentifier:(id)a1 basePhraseTemplate:(id)a2 parameterIdentifier:(id)a3 optionsCollectionTitle:(id)a4 optionsCollectionSystemImageName:(id)a5 primary:(char)a6 signature:(id)a7;
- (id)initWithLocalizedPhrase:(id)a0 bundleIdentifier:(id)a1 basePhraseTemplate:(id)a2 parameterIdentifier:(id)a3 primary:(char)a4;
- (id)initWithLocalizedPhrase:(id)a0 bundleIdentifier:(id)a1 basePhraseTemplate:(id)a2 parameterIdentifier:(id)a3 primary:(char)a4 signature:(id)a5;

@end
