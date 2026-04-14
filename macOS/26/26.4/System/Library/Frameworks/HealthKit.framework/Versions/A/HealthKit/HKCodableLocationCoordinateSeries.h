@class NSMutableArray;

@interface HKCodableLocationCoordinateSeries : PBCodable <NSCopying> {
    struct { unsigned char resumeDate : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *coordinates;
@property (nonatomic) BOOL hasResumeDate;
@property (nonatomic) double resumeDate;

+ (Class)coordinatesType;

- (id)coordinatesAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)coordinatesCount;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)addCoordinates:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearCoordinates;
- (id)description;
- (void)writeTo:(id)a0;

@end
