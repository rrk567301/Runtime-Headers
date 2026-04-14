@class NSString, NSArray, NSNumber;

@interface CCSet : NSObject <BMOPACKCodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *encodedDescriptors;
@property (readonly, nonatomic) unsigned char options;
@property (readonly, nonatomic) unsigned short itemType;
@property (readonly, nonatomic) NSArray *descriptors;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) NSNumber *key;

+ (id)setEnumeratorWithUseCase:(id)a0;
+ (id)setFromResourceSpecifier:(id)a0 inContainer:(id)a1 error:(id *)a2;
+ (id)descriptorWithKey:(id)a0 descriptors:(id)a1;
+ (id)itemIdentifierComponentOfKeyPrefixedIdentifier:(id)a0 error:(id *)a1;
+ (id)keyComponentOfKeyPrefixedIdentifier:(id)a0 error:(id *)a1;
+ (id)serializedSetEnumerator:(id)a0;
+ (id)setEnumerator;
+ (id)setFromXPCDictionary:(id)a0 error:(id *)a1;

- (BOOL)isEqualToSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initFromDictionary:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)identifier;
- (id)changePublisher;
- (id)changePublisherWithUseCase:(id)a0;
- (id)descriptorWithKey:(id)a0;
- (BOOL)isInUserVault;
- (id)copyWithOptions:(unsigned char)a0 error:(id *)a1;
- (id)initWithSet:(id)a0 error:(id *)a1;
- (id)toResourceSpecifier;
- (id)prefixedSharedIdentifierAsUUID:(id)a0;
- (id)toXPCDictionary;
- (id)_keyData;
- (id)initWithItemType:(unsigned short)a0 personaIdentifier:(id)a1 descriptors:(id)a2 options:(unsigned char)a3 error:(id *)a4;
- (id)initWithItemType:(unsigned short)a0 personaIdentifier:(id)a1 encodedDescriptors:(id)a2 descriptors:(id)a3 options:(unsigned char)a4 error:(id *)a5;
- (id)initWithItemType:(unsigned short)a0 personaIdentifier:(id)a1 encodedDescriptors:(id)a2 options:(unsigned char)a3 error:(id *)a4;
- (id)itemRetrieverWithUseCase:(id)a0;
- (id)keyPrefixedIdentifierForItemInstance:(id)a0;
- (id)keyPrefixedIdentifierForSharedItem:(id)a0;
- (id)keyPrefixedSourceItemIdentifierForItemInstance:(id)a0;
- (id)prefixedInstanceIdentifier:(id)a0;
- (id)prefixedInstanceIdentifierAsUUID:(id)a0;
- (id)prefixedSharedIdentifier:(id)a0;
- (id)serializeWithUseCase:(id)a0 enumerateToBookmark:(id)a1 error:(id *)a2;
- (id)serializeWithUseCase:(id)a0 error:(id *)a1;

@end
