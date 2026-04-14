@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *uploadTokens;
@property (readonly, nonatomic) BOOL hasAuthPutResponse;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSMutableArray *contentResponseHeaders;

+ (Class)contentResponseHeadersType;
+ (Class)uploadTokensType;

- (void)addUploadTokens:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (unsigned long long)uploadTokensCount;
- (id)contentResponseHeadersAtIndex:(unsigned long long)a0;
- (id)description;
- (unsigned long long)contentResponseHeadersCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)clearContentResponseHeaders;
- (void)clearUploadTokens;
- (void)addContentResponseHeaders:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)uploadTokensAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;

@end
