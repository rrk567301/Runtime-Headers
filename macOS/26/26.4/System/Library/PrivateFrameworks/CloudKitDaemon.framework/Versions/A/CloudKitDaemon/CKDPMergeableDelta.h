@class NSData, CKDPAsset, CKDPMergeableDeltaMetadata;

@interface CKDPMergeableDelta : PBCodable <NSCopying> {
    struct { unsigned char payload : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) CKDPMergeableDeltaMetadata *metadata;
@property (readonly, nonatomic) BOOL hasData;
@property (retain, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL hasEncryptedData;
@property (retain, nonatomic) NSData *encryptedData;
@property (readonly, nonatomic) BOOL hasAsset;
@property (retain, nonatomic) CKDPAsset *asset;
@property (readonly, nonatomic) BOOL hasEncryptedAsset;
@property (retain, nonatomic) CKDPAsset *encryptedAsset;
@property (nonatomic) BOOL hasPayload;
@property (nonatomic) int payload;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsPayload:(id)a0;
- (void)clearOneofValuesForPayload;
- (id)payloadAsString:(int)a0;

@end
