@class NSString;

@interface CKDPStreamingAssetSaveAssetResponse : PBCodable <NSCopying> {
    struct { unsigned char reservedSize : 1; unsigned char uploadURLExpirationTimeSeconds : 1; } _has;
}

@property (nonatomic) char hasReservedSize;
@property (nonatomic) long long reservedSize;
@property (readonly, nonatomic) char hasUploadURL;
@property (retain, nonatomic) NSString *uploadURL;
@property (nonatomic) char hasUploadURLExpirationTimeSeconds;
@property (nonatomic) long long uploadURLExpirationTimeSeconds;

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

@end
