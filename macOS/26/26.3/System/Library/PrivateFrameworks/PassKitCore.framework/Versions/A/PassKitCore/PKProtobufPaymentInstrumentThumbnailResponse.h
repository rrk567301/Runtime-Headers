@class NSData, NSString;

@interface PKProtobufPaymentInstrumentThumbnailResponse : PBCodable <NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasThumbnailImage;
@property (retain, nonatomic) NSData *thumbnailImage;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasManifestHash;
@property (retain, nonatomic) NSString *manifestHash;

- (int)StringAsStatus:(id)a0;
- (id)dictionaryRepresentation;
- (id)statusAsString:(int)a0;
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
