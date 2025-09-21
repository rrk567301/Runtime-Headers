@class OTCDPRecoveryInformation, OTEscrowAuthenticationInformation;

@interface OTICDPRecordContext : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasCdpInfo;
@property (retain, nonatomic) OTCDPRecoveryInformation *cdpInfo;
@property (readonly, nonatomic) char hasAuthInfo;
@property (retain, nonatomic) OTEscrowAuthenticationInformation *authInfo;

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
