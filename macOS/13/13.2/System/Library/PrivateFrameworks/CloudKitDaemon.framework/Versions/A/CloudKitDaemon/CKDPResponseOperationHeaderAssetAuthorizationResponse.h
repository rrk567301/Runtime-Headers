@class NSString, NSData, NSMutableArray;

@interface CKDPResponseOperationHeaderAssetAuthorizationResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasResponseUUID;
@property (retain, nonatomic) NSString *responseUUID;
@property (readonly, nonatomic) BOOL hasAuthGetResponseBody;
@property (retain, nonatomic) NSData *authGetResponseBody;
@property (retain, nonatomic) NSMutableArray *responseHeaders;

+ (Class)responseHeadersType;

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
- (void)clearResponseHeaders;
- (void)addResponseHeaders:(id)a0;
- (unsigned long long)responseHeadersCount;
- (id)responseHeadersAtIndex:(unsigned long long)a0;

@end
