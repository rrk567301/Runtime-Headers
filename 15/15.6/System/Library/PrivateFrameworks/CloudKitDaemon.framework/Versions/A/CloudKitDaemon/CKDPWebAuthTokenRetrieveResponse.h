@class NSString;

@interface CKDPWebAuthTokenRetrieveResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasToken;
@property (retain, nonatomic) NSString *token;
@property (readonly, nonatomic) char hasContainerScopedUserId;
@property (retain, nonatomic) NSString *containerScopedUserId;

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
