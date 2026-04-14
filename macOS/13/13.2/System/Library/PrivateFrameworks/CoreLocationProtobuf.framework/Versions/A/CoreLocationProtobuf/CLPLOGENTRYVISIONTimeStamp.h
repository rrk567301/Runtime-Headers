@interface CLPLOGENTRYVISIONTimeStamp : PBCodable <NSCopying> {
    struct { unsigned char cfAbsoluteTimeS : 1; unsigned char machAbsoluteTimeS : 1; unsigned char machContinuousTimeS : 1; } _has;
}

@property (nonatomic) BOOL hasCfAbsoluteTimeS;
@property (nonatomic) double cfAbsoluteTimeS;
@property (nonatomic) BOOL hasMachAbsoluteTimeS;
@property (nonatomic) double machAbsoluteTimeS;
@property (nonatomic) BOOL hasMachContinuousTimeS;
@property (nonatomic) double machContinuousTimeS;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
