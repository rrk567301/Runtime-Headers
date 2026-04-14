@class NSMutableArray;

@interface HKCodableLocationCoordinateSeries : PBCodable <NSCopying> {
    struct { unsigned char resumeDate : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *coordinates;
@property (nonatomic) BOOL hasResumeDate;
@property (nonatomic) double resumeDate;

+ (Class)coordinatesType;

- (void)addCoordinates:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearCoordinates;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)coordinatesCount;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)coordinatesAtIndex:(unsigned long long)a0;

@end
