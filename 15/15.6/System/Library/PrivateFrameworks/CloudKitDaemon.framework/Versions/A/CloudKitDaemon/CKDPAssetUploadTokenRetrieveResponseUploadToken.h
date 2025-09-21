@class NSString, CKDPAsset;

@interface CKDPAssetUploadTokenRetrieveResponseUploadToken : PBCodable <NSCopying> {
    struct { unsigned char tokenExpiration : 1; unsigned char duplicateAsset : 1; } _has;
}

@property (readonly, nonatomic) char hasToken;
@property (retain, nonatomic) NSString *token;
@property (readonly, nonatomic) char hasAsset;
@property (retain, nonatomic) CKDPAsset *asset;
@property (nonatomic) char hasTokenExpiration;
@property (nonatomic) long long tokenExpiration;
@property (nonatomic) char hasDuplicateAsset;
@property (nonatomic) char duplicateAsset;

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
