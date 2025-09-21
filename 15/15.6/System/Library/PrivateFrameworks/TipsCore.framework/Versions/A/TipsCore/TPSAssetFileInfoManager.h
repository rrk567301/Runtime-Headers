@class NSDictionary;

@interface TPSAssetFileInfoManager : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *fileMap;
@property (nonatomic) char allowsFallBack;

+ (id)na_identity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addNewAssetInfoFromFileMap:(id)a0;
- (id)fileInfoIdentifierWithMainIdentifier:(id)a0 userInterfaceStyle:(long long)a1;
- (id)fileInfoWithMainIdentifier:(id)a0 userInterfaceStyle:(long long)a1 scale:(long long)a2;
- (id)filesFromDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 clientConditions:(id)a1;

@end
