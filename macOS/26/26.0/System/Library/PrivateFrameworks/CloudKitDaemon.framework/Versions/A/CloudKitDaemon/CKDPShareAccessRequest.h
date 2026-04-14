@class NSString, NSData, CKDPUserInformationRequestAccess;

@interface CKDPShareAccessRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRoutingKey;
@property (retain, nonatomic) NSString *routingKey;
@property (readonly, nonatomic) BOOL hasShortTokenHash;
@property (retain, nonatomic) NSData *shortTokenHash;
@property (readonly, nonatomic) BOOL hasUserInformationRequestAccess;
@property (retain, nonatomic) CKDPUserInformationRequestAccess *userInformationRequestAccess;

+ (id)options;

- (Class)responseClass;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
