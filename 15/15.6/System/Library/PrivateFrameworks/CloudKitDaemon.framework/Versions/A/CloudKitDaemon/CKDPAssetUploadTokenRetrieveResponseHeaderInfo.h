@class NSString;

@interface CKDPAssetUploadTokenRetrieveResponseHeaderInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *headerKey;
@property (retain, nonatomic) NSString *headerValue;

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
