@class PDSProtoGSTokenAuth;

@interface PDSProtoUserAuth : PBCodable <NSCopying> {
    struct { unsigned char userauthOneof : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGsAuthToken;
@property (retain, nonatomic) PDSProtoGSTokenAuth *gsAuthToken;
@property (nonatomic) BOOL hasUserauthOneof;
@property (nonatomic) int userauthOneof;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)userauthOneofAsString:(int)a0;
- (int)StringAsUserauthOneof:(id)a0;
- (void)clearOneofValuesForUserauthOneof;

@end
