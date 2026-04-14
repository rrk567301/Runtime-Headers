@class NSMutableArray;

@interface HKCodableLocationCoordinateSeries : PBCodable <NSCopying> {
    struct { unsigned char resumeDate : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *coordinates;
@property (nonatomic) BOOL hasResumeDate;
@property (nonatomic) double resumeDate;

+ (Class)coordinatesType;

- (void)addCoordinates:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)coordinatesAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (void)clearCoordinates;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (unsigned long long)coordinatesCount;
- (id)dictionaryRepresentation;

@end
