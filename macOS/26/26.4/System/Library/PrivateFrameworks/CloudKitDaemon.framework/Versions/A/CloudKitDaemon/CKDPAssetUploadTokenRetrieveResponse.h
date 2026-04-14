@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *uploadTokens;
@property (readonly, nonatomic) BOOL hasAuthPutResponse;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSMutableArray *contentResponseHeaders;

+ (Class)contentResponseHeadersType;
+ (Class)uploadTokensType;

- (void)clearContentResponseHeaders;
- (id)uploadTokensAtIndex:(unsigned long long)a0;
- (void)addContentResponseHeaders:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearUploadTokens;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)uploadTokensCount;
- (unsigned long long)contentResponseHeadersCount;
- (void)addUploadTokens:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)contentResponseHeadersAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
