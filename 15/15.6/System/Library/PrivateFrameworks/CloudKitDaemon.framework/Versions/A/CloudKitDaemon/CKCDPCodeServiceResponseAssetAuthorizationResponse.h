@class NSString, NSData, NSMutableArray;

@interface CKCDPCodeServiceResponseAssetAuthorizationResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasResponseUUID;
@property (retain, nonatomic) NSString *responseUUID;
@property (readonly, nonatomic) char hasAuthGetResponseBody;
@property (retain, nonatomic) NSData *authGetResponseBody;
@property (retain, nonatomic) NSMutableArray *responseHeaders;

+ (Class)responseHeadersType;

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
- (void)addResponseHeaders:(id)a0;
- (void)clearResponseHeaders;
- (id)responseHeadersAtIndex:(unsigned long long)a0;
- (unsigned long long)responseHeadersCount;

@end
