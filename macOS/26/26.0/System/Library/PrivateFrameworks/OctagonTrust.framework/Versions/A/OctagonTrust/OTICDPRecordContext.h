@class OTCDPRecoveryInformation, OTEscrowAuthenticationInformation;

@interface OTICDPRecordContext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCdpInfo;
@property (retain, nonatomic) OTCDPRecoveryInformation *cdpInfo;
@property (readonly, nonatomic) BOOL hasAuthInfo;
@property (retain, nonatomic) OTEscrowAuthenticationInformation *authInfo;

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
