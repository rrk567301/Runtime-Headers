@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *uploadTokens;
@property (readonly, nonatomic) BOOL hasAuthPutResponse;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSMutableArray *contentResponseHeaders;

+ (Class)uploadTokensType;
+ (Class)contentResponseHeadersType;

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
- (void)clearUploadTokens;
- (void)addUploadTokens:(id)a0;
- (unsigned long long)uploadTokensCount;
- (id)uploadTokensAtIndex:(unsigned long long)a0;
- (void)clearContentResponseHeaders;
- (void)addContentResponseHeaders:(id)a0;
- (unsigned long long)contentResponseHeadersCount;
- (id)contentResponseHeadersAtIndex:(unsigned long long)a0;

@end
