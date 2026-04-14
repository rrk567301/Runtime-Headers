@class NSString, TVRMSServiceMessage;

@interface TVRMSConnectToServiceMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) TVRMSServiceMessage *service;
@property (readonly, nonatomic) BOOL hasPairingGUID;
@property (retain, nonatomic) NSString *pairingGUID;

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
