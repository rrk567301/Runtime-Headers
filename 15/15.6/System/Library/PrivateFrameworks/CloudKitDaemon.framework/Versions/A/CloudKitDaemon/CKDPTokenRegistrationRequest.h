@class CKDPTokenRegistrationBody;

@interface CKDPTokenRegistrationRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasTokenRegistrationBody;
@property (retain, nonatomic) CKDPTokenRegistrationBody *tokenRegistrationBody;

+ (id)options;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
