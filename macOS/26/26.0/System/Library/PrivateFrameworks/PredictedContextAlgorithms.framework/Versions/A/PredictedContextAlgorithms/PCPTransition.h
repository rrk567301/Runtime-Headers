@class NSData, PCPMotionActivity;

@interface PCPTransition : PBCodable <NSCopying> {
    struct { unsigned char startTimeCFAbsolute : 1; unsigned char stopTimeCFAbsolute : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasVisitIdentifierOrigin;
@property (retain, nonatomic) NSData *visitIdentifierOrigin;
@property (readonly, nonatomic) BOOL hasVisitIdentifierDestination;
@property (retain, nonatomic) NSData *visitIdentifierDestination;
@property (nonatomic) BOOL hasStartTimeCFAbsolute;
@property (nonatomic) double startTimeCFAbsolute;
@property (nonatomic) BOOL hasStopTimeCFAbsolute;
@property (nonatomic) double stopTimeCFAbsolute;
@property (readonly, nonatomic) BOOL hasPredominantMotionActivity;
@property (retain, nonatomic) PCPMotionActivity *predominantMotionActivity;

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
