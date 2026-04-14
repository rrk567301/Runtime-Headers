@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *uploadTokens;
@property (readonly, nonatomic) BOOL hasAuthPutResponse;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSMutableArray *contentResponseHeaders;

+ (Class)contentResponseHeadersType;
+ (Class)uploadTokensType;

- (id)uploadTokensAtIndex:(unsigned long long)a0;
- (id)contentResponseHeadersAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)clearContentResponseHeaders;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void)addContentResponseHeaders:(id)a0;
- (unsigned long long)uploadTokensCount;
- (void)clearUploadTokens;
- (void).cxx_destruct;
- (unsigned long long)contentResponseHeadersCount;
- (void)addUploadTokens:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
