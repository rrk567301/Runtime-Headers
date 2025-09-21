@class CKDPRequestedFields;

@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable <NSCopying> {
    struct { unsigned char requestedTTL : 1; unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) char hasAssetFields;
@property (retain, nonatomic) CKDPRequestedFields *assetFields;
@property (nonatomic) char hasRequestedTTL;
@property (nonatomic) long long requestedTTL;
@property (nonatomic) char hasType;
@property (nonatomic) int type;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
