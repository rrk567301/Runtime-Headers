@class NSData, NSString;

@interface CKDPCodeFunctionInvokeResponseAttestationResponseAttestation : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasAppQuote;
@property (retain, nonatomic) NSData *appQuote;
@property (readonly, nonatomic) char hasAqeQuote;
@property (retain, nonatomic) NSData *aqeQuote;
@property (readonly, nonatomic) char hasPckCertificate;
@property (retain, nonatomic) NSString *pckCertificate;
@property (readonly, nonatomic) char hasRoutingToken;
@property (retain, nonatomic) NSData *routingToken;

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
