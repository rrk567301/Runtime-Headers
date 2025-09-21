@class NSString;

@interface CKDPStreamingAssetRetrieveAssetResponse : PBCodable <NSCopying> {
    struct { unsigned char downloadURLExpirationTimeSeconds : 1; unsigned char size : 1; } _has;
}

@property (nonatomic) char hasSize;
@property (nonatomic) long long size;
@property (readonly, nonatomic) char hasDownloadURL;
@property (retain, nonatomic) NSString *downloadURL;
@property (nonatomic) char hasDownloadURLExpirationTimeSeconds;
@property (nonatomic) long long downloadURLExpirationTimeSeconds;

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
