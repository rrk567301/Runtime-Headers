@class NSString, NSData, NSMutableArray;

@interface CKCDPCodeServiceResponseAssetAuthorizationResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasResponseUUID;
@property (retain, nonatomic) NSString *responseUUID;
@property (readonly, nonatomic) BOOL hasAuthGetResponseBody;
@property (retain, nonatomic) NSData *authGetResponseBody;
@property (retain, nonatomic) NSMutableArray *responseHeaders;

+ (Class)responseHeadersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addResponseHeaders:(id)a0;
- (unsigned long long)responseHeadersCount;
- (void)clearResponseHeaders;
- (id)responseHeadersAtIndex:(unsigned long long)a0;

@end
