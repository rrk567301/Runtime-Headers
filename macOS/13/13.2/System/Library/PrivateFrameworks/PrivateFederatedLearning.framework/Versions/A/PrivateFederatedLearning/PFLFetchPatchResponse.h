@class CKCodeRecordTransport;

@interface PFLFetchPatchResponse : PBCodable <NSCopying> {
    struct { unsigned char modelVersion : 1; } _has;
}

@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) long long modelVersion;
@property (readonly, nonatomic) BOOL hasPatchAsset;
@property (retain, nonatomic) CKCodeRecordTransport *patchAsset;

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

@end
