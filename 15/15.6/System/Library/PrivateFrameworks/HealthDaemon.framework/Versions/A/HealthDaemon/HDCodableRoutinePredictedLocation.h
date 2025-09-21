@class NSData, HDCodableRoutineLocation;

@interface HDCodableRoutinePredictedLocation : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char nextEntryTime : 1; unsigned char modeOfTransportation : 1; unsigned char sourceType : 1; } _has;
}

@property (readonly, nonatomic) char hasLocationOfInterest;
@property (retain, nonatomic) HDCodableRoutineLocation *locationOfInterest;
@property (nonatomic) char hasConfidence;
@property (nonatomic) double confidence;
@property (nonatomic) char hasNextEntryTime;
@property (nonatomic) double nextEntryTime;
@property (nonatomic) char hasModeOfTransportation;
@property (nonatomic) int modeOfTransportation;
@property (nonatomic) char hasSourceType;
@property (nonatomic) int sourceType;
@property (readonly, nonatomic) char hasGeoData;
@property (retain, nonatomic) NSData *geoData;

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
- (int)StringAsSourceType:(id)a0;
- (id)sourceTypeAsString:(int)a0;
- (int)StringAsModeOfTransportation:(id)a0;
- (id)modeOfTransportationAsString:(int)a0;

@end
