@interface ATXPBPredictionAmbientLightContext : PBCodable <NSCopying> {
    struct { unsigned char ambientLightType : 1; } _has;
}

@property (nonatomic) char hasAmbientLightType;
@property (nonatomic) int ambientLightType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAmbientLightType:(id)a0;
- (id)ambientLightTypeAsString:(int)a0;

@end
