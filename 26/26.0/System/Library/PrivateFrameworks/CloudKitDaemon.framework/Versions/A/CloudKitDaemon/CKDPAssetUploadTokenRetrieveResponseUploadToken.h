@class NSString, CKDPAsset;

@interface CKDPAssetUploadTokenRetrieveResponseUploadToken : PBCodable <NSCopying> {
    struct { unsigned char tokenExpiration : 1; unsigned char duplicateAsset : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) NSString *token;
@property (readonly, nonatomic) BOOL hasAsset;
@property (retain, nonatomic) CKDPAsset *asset;
@property (nonatomic) BOOL hasTokenExpiration;
@property (nonatomic) long long tokenExpiration;
@property (nonatomic) BOOL hasDuplicateAsset;
@property (nonatomic) BOOL duplicateAsset;

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
