@class NSString, MIAppIdentity;

@interface IXApplicationIdentity : MIAppIdentity <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) MIAppIdentity *miAppIdentity;

+ (id)identitiesForBundleIdentifiers:(id)a0;

- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithBundleID:(id)a0;
- (id)canonicalSerializationForPlistKey;
- (id)initWithBundleID:(id)a0 persona:(id)a1;
- (id)initUsingPersonaFromCurrentThreadAndBundleIdentifier:(id)a0;
- (BOOL)resolvePersonaWithError:(id *)a0;
- (id)initWithBundleIdentifier:(id)a0 personaUniqueString:(id)a1;
- (id)initFromPlistDictionary:(id)a0;
- (id)resolvePersonaUsingModuleSpecificLogicWithError:(id *)a0;
- (id)initWithPlistKeySerialization:(id)a0;
- (id)description;
- (id)initWithBundleIdentifier:(id)a0 personaUniqueString:(id)a1 location:(id)a2;
- (id)initWithBundleID:(id)a0 personaUniqueString:(id)a1 location:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initFromDelimitedString:(id)a0;
- (id)possibleSerializationsForPlistKey;

@end
