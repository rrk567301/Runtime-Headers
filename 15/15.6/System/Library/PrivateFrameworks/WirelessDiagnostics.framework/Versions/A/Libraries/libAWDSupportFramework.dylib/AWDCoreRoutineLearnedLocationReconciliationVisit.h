@class NSMutableArray;

@interface AWDCoreRoutineLearnedLocationReconciliationVisit : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char datapointCount : 1; unsigned char deviceClass : 1; unsigned char percentageTransitions : 1; unsigned char percentageVisits : 1; unsigned char placeLabelType : 1; unsigned char placeType : 1; unsigned char didUnlock : 1; unsigned char newPlace : 1; unsigned char placeAOIPOI : 1; unsigned char watchPresent : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDatapointCount;
@property (nonatomic) int datapointCount;
@property (nonatomic) char hasDeviceClass;
@property (nonatomic) int deviceClass;
@property (nonatomic) char hasWatchPresent;
@property (nonatomic) char watchPresent;
@property (nonatomic) char hasDidUnlock;
@property (nonatomic) char didUnlock;
@property (nonatomic) char hasNewPlace;
@property (nonatomic) char newPlace;
@property (nonatomic) char hasPlaceType;
@property (nonatomic) int placeType;
@property (nonatomic) char hasPlaceLabelType;
@property (nonatomic) int placeLabelType;
@property (nonatomic) char hasPlaceAOIPOI;
@property (nonatomic) char placeAOIPOI;
@property (nonatomic) char hasPercentageVisits;
@property (nonatomic) int percentageVisits;
@property (nonatomic) char hasPercentageTransitions;
@property (nonatomic) int percentageTransitions;
@property (retain, nonatomic) NSMutableArray *alternativeVisits;

+ (Class)alternativeVisitsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAlternativeVisits:(id)a0;
- (id)alternativeVisitsAtIndex:(unsigned long long)a0;
- (unsigned long long)alternativeVisitsCount;
- (void)clearAlternativeVisits;

@end
