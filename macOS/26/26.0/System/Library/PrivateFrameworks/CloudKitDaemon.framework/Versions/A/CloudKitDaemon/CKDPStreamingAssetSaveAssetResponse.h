@class NSString;

@interface CKDPStreamingAssetSaveAssetResponse : PBCodable <NSCopying> {
    struct { unsigned char reservedSize : 1; unsigned char uploadURLExpirationTimeSeconds : 1; } _has;
}

@property (nonatomic) BOOL hasReservedSize;
@property (nonatomic) long long reservedSize;
@property (readonly, nonatomic) BOOL hasUploadURL;
@property (retain, nonatomic) NSString *uploadURL;
@property (nonatomic) BOOL hasUploadURLExpirationTimeSeconds;
@property (nonatomic) long long uploadURLExpirationTimeSeconds;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
