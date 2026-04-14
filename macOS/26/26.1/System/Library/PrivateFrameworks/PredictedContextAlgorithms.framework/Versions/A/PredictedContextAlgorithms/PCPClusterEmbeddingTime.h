@interface PCPClusterEmbeddingTime : PBCodable <NSCopying> {
    struct { unsigned char dayOfWeekCos : 1; unsigned char dayOfWeekSin : 1; unsigned char normalizedDuration : 1; unsigned char timeOfDayCos : 1; unsigned char timeOfDaySin : 1; unsigned char weekOfYear : 1; unsigned char isWeekend : 1; } _has;
}

@property (nonatomic) BOOL hasNormalizedDuration;
@property (nonatomic) double normalizedDuration;
@property (nonatomic) BOOL hasTimeOfDayCos;
@property (nonatomic) double timeOfDayCos;
@property (nonatomic) BOOL hasTimeOfDaySin;
@property (nonatomic) double timeOfDaySin;
@property (nonatomic) BOOL hasDayOfWeekCos;
@property (nonatomic) double dayOfWeekCos;
@property (nonatomic) BOOL hasDayOfWeekSin;
@property (nonatomic) double dayOfWeekSin;
@property (nonatomic) BOOL hasIsWeekend;
@property (nonatomic) BOOL isWeekend;
@property (nonatomic) BOOL hasWeekOfYear;
@property (nonatomic) unsigned int weekOfYear;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
