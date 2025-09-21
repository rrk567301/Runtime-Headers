@class NSMutableArray;

@interface HKCodableLocationCoordinateSeries : PBCodable <NSCopying> {
    struct { unsigned char resumeDate : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *coordinates;
@property (nonatomic) char hasResumeDate;
@property (nonatomic) double resumeDate;

+ (Class)coordinatesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addCoordinates:(id)a0;
- (void)clearCoordinates;
- (id)coordinatesAtIndex:(unsigned long long)a0;
- (unsigned long long)coordinatesCount;

@end
