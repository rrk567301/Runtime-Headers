@class NSString, PBUnknownFields, NSDate;

@interface GEOPDDepartureFrequency : PBCodable <GEOTransitDepartureFrequency, NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _displayDepartureFrequency;
    unsigned int _earliestDepartureTime;
    unsigned int _latestDepartureTime;
    unsigned int _maxDepartureFrequency;
    unsigned int _minDepartureFrequency;
    char _isEstimated;
    struct { unsigned char has_displayDepartureFrequency : 1; unsigned char has_earliestDepartureTime : 1; unsigned char has_latestDepartureTime : 1; unsigned char has_maxDepartureFrequency : 1; unsigned char has_minDepartureFrequency : 1; unsigned char has_isEstimated : 1; } _flags;
}

@property (readonly, nonatomic) NSDate *firstTimeInFrequency;
@property (readonly, nonatomic) NSDate *lastTimeInFrequency;
@property (readonly, nonatomic) double frequencyForSorting;
@property (readonly, nonatomic) long long frequencyType;
@property (readonly, nonatomic) char isEstimate;
@property (readonly, nonatomic) long long displayFrequency;
@property (readonly, nonatomic) long long minFrequency;
@property (readonly, nonatomic) long long maxFrequency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasMinDepartureFrequency;
@property (nonatomic) unsigned int minDepartureFrequency;
@property (nonatomic) char hasMaxDepartureFrequency;
@property (nonatomic) unsigned int maxDepartureFrequency;
@property (nonatomic) char hasEarliestDepartureTime;
@property (nonatomic) unsigned int earliestDepartureTime;
@property (nonatomic) char hasLatestDepartureTime;
@property (nonatomic) unsigned int latestDepartureTime;
@property (nonatomic) char hasIsEstimated;
@property (nonatomic) char isEstimated;
@property (nonatomic) char hasDisplayDepartureFrequency;
@property (nonatomic) unsigned int displayDepartureFrequency;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (char)isValidAtDate:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
