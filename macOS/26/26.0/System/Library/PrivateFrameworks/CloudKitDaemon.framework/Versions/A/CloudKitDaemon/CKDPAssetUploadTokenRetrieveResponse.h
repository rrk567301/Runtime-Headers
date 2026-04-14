@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *uploadTokens;
@property (readonly, nonatomic) BOOL hasAuthPutResponse;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSMutableArray *contentResponseHeaders;

+ (Class)contentResponseHeadersType;
+ (Class)uploadTokensType;

- (void)addUploadTokens:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)contentResponseHeadersCount;
- (id)dictionaryRepresentation;
- (id)contentResponseHeadersAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addContentResponseHeaders:(id)a0;
- (id)uploadTokensAtIndex:(unsigned long long)a0;
- (void)clearContentResponseHeaders;
- (void)writeTo:(id)a0;
- (unsigned long long)uploadTokensCount;
- (unsigned long long)hash;
- (void)clearUploadTokens;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
