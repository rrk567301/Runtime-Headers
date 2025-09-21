@class NSDictionary;

@interface TPSAssetFileInfoManager : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *fileMap;
@property (nonatomic) BOOL allowsFallBack;

+ (id)na_identity;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 clientConditions:(id)a1;
- (id)filesFromDictionary:(id)a0;
- (id)fileInfoWithMainIdentifier:(id)a0 userInterfaceStyle:(long long)a1 scale:(long long)a2;
- (id)fileInfoIdentifierWithMainIdentifier:(id)a0 userInterfaceStyle:(long long)a1;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)addNewAssetInfoFromFileMap:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
