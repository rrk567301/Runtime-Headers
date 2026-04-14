@class CKDPRecordIdentifier;

@interface CKDPMarkAssetBrokenResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMissingAssetStatusRecord;
@property (retain, nonatomic) CKDPRecordIdentifier *missingAssetStatusRecord;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
