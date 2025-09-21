@class CKDPRecordFieldIdentifier, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasField;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *field;
@property (retain, nonatomic) NSMutableArray *assets;

+ (Class)assetsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAssets:(id)a0;
- (unsigned long long)assetsCount;
- (id)assetsAtIndex:(unsigned long long)a0;
- (void)clearAssets;

@end
