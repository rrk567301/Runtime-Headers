@interface AWDCoreRoutineModelClusterStandardDeviationInstance : PBCodable <NSCopying> {
    struct { unsigned char entryStandardDeviation : 1; unsigned char exitStandardDeviation : 1; } _has;
}

@property (nonatomic) char hasEntryStandardDeviation;
@property (nonatomic) int entryStandardDeviation;
@property (nonatomic) char hasExitStandardDeviation;
@property (nonatomic) int exitStandardDeviation;

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
