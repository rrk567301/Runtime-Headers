@class CKDPTokenRegistrationBody;

@interface CKDPTokenRegistrationRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasTokenRegistrationBody;
@property (retain, nonatomic) CKDPTokenRegistrationBody *tokenRegistrationBody;

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
