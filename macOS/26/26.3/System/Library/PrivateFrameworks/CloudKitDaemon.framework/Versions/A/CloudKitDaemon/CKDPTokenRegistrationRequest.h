@class CKDPTokenRegistrationBody;

@interface CKDPTokenRegistrationRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasTokenRegistrationBody;
@property (retain, nonatomic) CKDPTokenRegistrationBody *tokenRegistrationBody;

+ (id)options;

- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
