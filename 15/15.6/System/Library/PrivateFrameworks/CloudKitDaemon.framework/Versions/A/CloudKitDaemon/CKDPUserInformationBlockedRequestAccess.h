@class NSString, CKDPContactInformation;

@interface CKDPUserInformationBlockedRequestAccess : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) char hasContactInformation;
@property (retain, nonatomic) CKDPContactInformation *contactInformation;

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
