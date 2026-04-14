@class NSString;

@interface CKDPWebAuthTokenRetrieveResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) NSString *token;
@property (readonly, nonatomic) BOOL hasContainerScopedUserId;
@property (retain, nonatomic) NSString *containerScopedUserId;

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
