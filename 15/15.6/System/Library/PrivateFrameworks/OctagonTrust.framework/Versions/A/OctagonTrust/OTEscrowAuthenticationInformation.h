@class NSString;

@interface OTEscrowAuthenticationInformation : PBCodable <NSCopying> {
    struct { unsigned char fmipRecovery : 1; unsigned char idmsRecovery : 1; } _has;
}

@property (readonly, nonatomic) char hasAuthenticationPassword;
@property (retain, nonatomic) NSString *authenticationPassword;
@property (readonly, nonatomic) char hasAuthenticationDsid;
@property (retain, nonatomic) NSString *authenticationDsid;
@property (readonly, nonatomic) char hasAuthenticationAppleid;
@property (retain, nonatomic) NSString *authenticationAppleid;
@property (readonly, nonatomic) char hasFmipUuid;
@property (retain, nonatomic) NSString *fmipUuid;
@property (nonatomic) char hasFmipRecovery;
@property (nonatomic) char fmipRecovery;
@property (nonatomic) char hasIdmsRecovery;
@property (nonatomic) char idmsRecovery;
@property (readonly, nonatomic) char hasAuthenticationAuthToken;
@property (retain, nonatomic) NSString *authenticationAuthToken;
@property (readonly, nonatomic) char hasAuthenticationEscrowproxyUrl;
@property (retain, nonatomic) NSString *authenticationEscrowproxyUrl;
@property (readonly, nonatomic) char hasAuthenticationIcloudEnvironment;
@property (retain, nonatomic) NSString *authenticationIcloudEnvironment;

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
