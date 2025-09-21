@interface ATXPBPredictionAmbientLightContext : PBCodable <NSCopying> {
    struct { unsigned char ambientLightType : 1; } _has;
}

@property (nonatomic) BOOL hasAmbientLightType;
@property (nonatomic) int ambientLightType;

- (void)copyTo:(id)a0;
- (int)StringAsAmbientLightType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (id)ambientLightTypeAsString:(int)a0;
- (BOOL)isEqual:(id)a0;

@end
