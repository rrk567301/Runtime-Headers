@class NSString, ModelKeyServerAPISignedKey, ModelKeyServerAPIRawKey;

@interface ModelKeyServerAPIFetchKeyResult : PBCodable <NSCopying> {
    struct { unsigned char key : 1; } _has;
}

@property (readonly, nonatomic) char hasKeyId;
@property (retain, nonatomic) NSString *keyId;
@property (readonly, nonatomic) char hasModelName;
@property (retain, nonatomic) NSString *modelName;
@property (readonly, nonatomic) char hasTeamId;
@property (retain, nonatomic) NSString *teamId;
@property (readonly, nonatomic) char hasSignedKey;
@property (retain, nonatomic) ModelKeyServerAPISignedKey *signedKey;
@property (readonly, nonatomic) char hasRawKey;
@property (retain, nonatomic) ModelKeyServerAPIRawKey *rawKey;
@property (nonatomic) char hasKey;
@property (nonatomic) int key;

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
- (int)StringAsKey:(id)a0;
- (void)clearOneofValuesForKey;
- (id)keyAsString:(int)a0;

@end
