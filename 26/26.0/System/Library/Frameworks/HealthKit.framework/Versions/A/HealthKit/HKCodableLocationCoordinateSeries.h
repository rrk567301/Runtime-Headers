@class NSMutableArray;

@interface HKCodableLocationCoordinateSeries : PBCodable <NSCopying> {
    struct { unsigned char resumeDate : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *coordinates;
@property (nonatomic) BOOL hasResumeDate;
@property (nonatomic) double resumeDate;

+ (Class)coordinatesType;

- (void)copyTo:(id)a0;
- (void)addCoordinates:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)coordinatesAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)coordinatesCount;
- (void)writeTo:(id)a0;
- (void)clearCoordinates;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
