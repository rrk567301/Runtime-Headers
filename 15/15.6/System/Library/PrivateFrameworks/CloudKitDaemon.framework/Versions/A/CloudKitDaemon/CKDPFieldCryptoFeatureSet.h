@interface CKDPFieldCryptoFeatureSet : PBCodable <NSCopying> {
    struct { unsigned char assetKeyEncryptionType : 1; unsigned char encryptedFieldContextType : 1; unsigned char minimumSchemaVersion : 1; unsigned char mmcsVersion : 1; } _has;
}

@property (nonatomic) char hasMinimumSchemaVersion;
@property (nonatomic) int minimumSchemaVersion;
@property (nonatomic) char hasMmcsVersion;
@property (nonatomic) int mmcsVersion;
@property (nonatomic) char hasEncryptedFieldContextType;
@property (nonatomic) int encryptedFieldContextType;
@property (nonatomic) char hasAssetKeyEncryptionType;
@property (nonatomic) int assetKeyEncryptionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
