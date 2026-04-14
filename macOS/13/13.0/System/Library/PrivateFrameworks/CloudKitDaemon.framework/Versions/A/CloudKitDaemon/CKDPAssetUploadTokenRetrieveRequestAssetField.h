@class CKDPRecordFieldIdentifier, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasField;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *field;
@property (retain, nonatomic) NSMutableArray *assets;

+ (Class)assetsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)assetsCount;
- (void)addAssets:(id)a0;
- (void)clearAssets;
- (id)assetsAtIndex:(unsigned long long)a0;

@end
