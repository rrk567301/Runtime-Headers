@class NSData, NSString;

@interface CKCDPCodeServiceResponseAttestationResponseAttestation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAppQuote;
@property (retain, nonatomic) NSData *appQuote;
@property (readonly, nonatomic) BOOL hasAqeQuote;
@property (retain, nonatomic) NSData *aqeQuote;
@property (readonly, nonatomic) BOOL hasPckCertificate;
@property (retain, nonatomic) NSString *pckCertificate;
@property (readonly, nonatomic) BOOL hasRoutingToken;
@property (retain, nonatomic) NSData *routingToken;

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
