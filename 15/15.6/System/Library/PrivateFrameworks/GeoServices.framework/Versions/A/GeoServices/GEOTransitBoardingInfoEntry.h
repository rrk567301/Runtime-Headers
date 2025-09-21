@class PBUnknownFields, PBDataReader, GEOTransitListTimeInstruction, GEOFormattedString, GEOTransitExitPlanInfo, GEOTransitOccupancyInfo;

@interface GEOTransitBoardingInfoEntry : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_alternativeText;
    GEOTransitListTimeInstruction *_alternativeTimeInstruction;
    GEOTransitExitPlanInfo *_exitPlanInfoOverride;
    GEOFormattedString *_mainText;
    GEOTransitListTimeInstruction *_mainTimeInstruction;
    GEOTransitOccupancyInfo *_occupancyInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _expectedDepartureTime;
    char _clearExitPlanInfo;
    struct { unsigned char has_expectedDepartureTime : 1; unsigned char has_clearExitPlanInfo : 1; unsigned char read_unknownFields : 1; unsigned char read_alternativeText : 1; unsigned char read_alternativeTimeInstruction : 1; unsigned char read_exitPlanInfoOverride : 1; unsigned char read_mainText : 1; unsigned char read_mainTimeInstruction : 1; unsigned char read_occupancyInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasExpectedDepartureTime;
@property (nonatomic) unsigned int expectedDepartureTime;
@property (readonly, nonatomic) char hasMainText;
@property (retain, nonatomic) GEOFormattedString *mainText;
@property (readonly, nonatomic) char hasAlternativeText;
@property (retain, nonatomic) GEOFormattedString *alternativeText;
@property (readonly, nonatomic) char hasMainTimeInstruction;
@property (retain, nonatomic) GEOTransitListTimeInstruction *mainTimeInstruction;
@property (readonly, nonatomic) char hasAlternativeTimeInstruction;
@property (retain, nonatomic) GEOTransitListTimeInstruction *alternativeTimeInstruction;
@property (readonly, nonatomic) char hasOccupancyInfo;
@property (retain, nonatomic) GEOTransitOccupancyInfo *occupancyInfo;
@property (readonly, nonatomic) char hasExitPlanInfoOverride;
@property (retain, nonatomic) GEOTransitExitPlanInfo *exitPlanInfoOverride;
@property (nonatomic) char hasClearExitPlanInfo;
@property (nonatomic) char clearExitPlanInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
