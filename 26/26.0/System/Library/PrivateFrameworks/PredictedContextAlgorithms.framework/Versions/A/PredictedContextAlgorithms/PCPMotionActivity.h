@interface PCPMotionActivity : PBCodable <NSCopying> {
    struct { unsigned char startTimeCFAbsolute : 1; unsigned char motionActivityConfidence : 1; unsigned char motionActivityType : 1; } _has;
}

@property (nonatomic) BOOL hasMotionActivityType;
@property (nonatomic) int motionActivityType;
@property (nonatomic) BOOL hasMotionActivityConfidence;
@property (nonatomic) int motionActivityConfidence;
@property (nonatomic) BOOL hasStartTimeCFAbsolute;
@property (nonatomic) double startTimeCFAbsolute;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsMotionActivityType:(id)a0;
- (int)StringAsMotionActivityConfidence:(id)a0;
- (id)motionActivityConfidenceAsString:(int)a0;
- (id)motionActivityTypeAsString:(int)a0;

@end
