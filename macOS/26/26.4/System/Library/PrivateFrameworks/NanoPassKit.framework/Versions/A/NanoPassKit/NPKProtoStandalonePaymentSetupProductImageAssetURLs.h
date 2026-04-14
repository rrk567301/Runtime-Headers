@class NSString;

@interface NPKProtoStandalonePaymentSetupProductImageAssetURLs : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDigitalCardImageUrl;
@property (retain, nonatomic) NSString *digitalCardImageUrl;
@property (readonly, nonatomic) BOOL hasThumbnailImageUrl;
@property (retain, nonatomic) NSString *thumbnailImageUrl;
@property (readonly, nonatomic) BOOL hasLogoImageUrl;
@property (retain, nonatomic) NSString *logoImageUrl;

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

@end
