@interface CLPLOGENTRYVISIONTimeStamp : PBCodable <NSCopying> {
    struct { unsigned char cfAbsoluteTimeS : 1; unsigned char machAbsoluteTimeS : 1; unsigned char machContinuousTimeS : 1; } _has;
}

@property (nonatomic) char hasCfAbsoluteTimeS;
@property (nonatomic) double cfAbsoluteTimeS;
@property (nonatomic) char hasMachAbsoluteTimeS;
@property (nonatomic) double machAbsoluteTimeS;
@property (nonatomic) char hasMachContinuousTimeS;
@property (nonatomic) double machContinuousTimeS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
