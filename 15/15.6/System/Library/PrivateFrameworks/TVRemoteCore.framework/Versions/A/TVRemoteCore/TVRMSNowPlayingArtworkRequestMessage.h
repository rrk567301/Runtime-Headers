@class NSString;

@interface TVRMSNowPlayingArtworkRequestMessage : PBCodable <NSCopying> {
    struct { unsigned char compressionQuality : 1; unsigned char height : 1; unsigned char width : 1; } _has;
}

@property (readonly, nonatomic) char hasArtworkIdentifier;
@property (retain, nonatomic) NSString *artworkIdentifier;
@property (nonatomic) char hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) char hasHeight;
@property (nonatomic) unsigned int height;
@property (nonatomic) char hasCompressionQuality;
@property (nonatomic) float compressionQuality;

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
