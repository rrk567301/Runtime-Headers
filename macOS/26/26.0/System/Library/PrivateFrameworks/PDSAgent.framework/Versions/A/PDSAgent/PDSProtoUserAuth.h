@class PDSProtoGSTokenAuth;

@interface PDSProtoUserAuth : PBCodable <NSCopying> {
    struct { unsigned char userauthOneof : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGsAuthToken;
@property (retain, nonatomic) PDSProtoGSTokenAuth *gsAuthToken;
@property (nonatomic) BOOL hasUserauthOneof;
@property (nonatomic) int userauthOneof;

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
- (int)StringAsUserauthOneof:(id)a0;
- (void)clearOneofValuesForUserauthOneof;
- (id)userauthOneofAsString:(int)a0;

@end
