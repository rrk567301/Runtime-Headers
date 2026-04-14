@class NSString, PDSProtoUserAuth;

@interface PDSProtoUserPushToken : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) BOOL hasUserAuth;
@property (retain, nonatomic) PDSProtoUserAuth *userAuth;
@property (retain, nonatomic) NSString *pushToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
