@interface AWDCoreRoutineHintSourceUsageInstance : PBCodable <NSCopying> {
    struct { unsigned char hintSource : 1; unsigned char isLOI : 1; unsigned char isVisit : 1; } _has;
}

@property (nonatomic) char hasHintSource;
@property (nonatomic) int hintSource;
@property (nonatomic) char hasIsLOI;
@property (nonatomic) int isLOI;
@property (nonatomic) char hasIsVisit;
@property (nonatomic) int isVisit;

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
