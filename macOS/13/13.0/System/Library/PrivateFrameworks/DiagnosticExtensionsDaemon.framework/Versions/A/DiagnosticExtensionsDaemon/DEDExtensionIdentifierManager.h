@class NSString, NSMutableDictionary;

@interface DEDExtensionIdentifierManager : NSObject <NSSecureCoding, DEDSecureArchiving>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *identifierTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)archivedClasses;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)allIdentifiers;
- (id)initWithExtensionIdentifiers:(id)a0;
- (id)identifierForExtensionIdentifier:(id)a0;
- (id)knownIdentifiersForExtensionIdentifier:(id)a0;
- (void)revokeIdentifier:(id)a0;
- (BOOL)isKnownIdentifier:(id)a0;

@end
