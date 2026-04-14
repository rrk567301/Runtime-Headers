@class NSString, MIAppIdentity;

@interface IXApplicationIdentity : MIAppIdentity <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) MIAppIdentity *miAppIdentity;

+ (id)identitiesForBundleIdentifiers:(id)a0;

- (id)initWithBundleIdentifier:(id)a0 personaUniqueString:(id)a1 location:(id)a2;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithPlistKeySerialization:(id)a0;
- (id)initWithBundleID:(id)a0 persona:(id)a1;
- (id)initWithBundleID:(id)a0 personaUniqueString:(id)a1 location:(id)a2;
- (id)initWithBundleID:(id)a0;
- (id)initFromPlistDictionary:(id)a0;
- (id)description;
- (id)initWithBundleIdentifier:(id)a0 personaUniqueString:(id)a1;
- (BOOL)resolvePersonaWithError:(id *)a0;
- (id)initUsingPersonaFromCurrentThreadAndBundleIdentifier:(id)a0;
- (id)initFromDelimitedString:(id)a0;
- (id)possibleSerializationsForPlistKey;
- (id)initWithCoder:(id)a0;
- (id)canonicalSerializationForPlistKey;
- (id)resolvePersonaUsingModuleSpecificLogicWithError:(id *)a0;

@end
