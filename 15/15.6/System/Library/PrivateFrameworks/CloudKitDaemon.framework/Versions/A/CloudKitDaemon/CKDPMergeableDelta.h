@class NSData, CKDPAsset, CKDPMergeableDeltaMetadata;

@interface CKDPMergeableDelta : PBCodable <NSCopying> {
    struct { unsigned char payload : 1; } _has;
}

@property (readonly, nonatomic) char hasMetadata;
@property (retain, nonatomic) CKDPMergeableDeltaMetadata *metadata;
@property (readonly, nonatomic) char hasData;
@property (retain, nonatomic) NSData *data;
@property (readonly, nonatomic) char hasEncryptedData;
@property (retain, nonatomic) NSData *encryptedData;
@property (readonly, nonatomic) char hasAsset;
@property (retain, nonatomic) CKDPAsset *asset;
@property (readonly, nonatomic) char hasEncryptedAsset;
@property (retain, nonatomic) CKDPAsset *encryptedAsset;
@property (nonatomic) char hasPayload;
@property (nonatomic) int payload;

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
- (int)StringAsPayload:(id)a0;
- (void)clearOneofValuesForPayload;
- (id)payloadAsString:(int)a0;

@end
