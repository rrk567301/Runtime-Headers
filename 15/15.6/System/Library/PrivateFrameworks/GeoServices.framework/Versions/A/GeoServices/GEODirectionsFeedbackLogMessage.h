@class PBDataReader, NSMutableArray, GEOLocation;

@interface GEODirectionsFeedbackLogMessage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct GEONavigationAudioFeedback { char _bTHFPAvailableAtEndOfNav; char _bTHFPRoutesAvailable; char _currentRouteHFPEnabledAtEndOfNav; int _currentRouteTypeAtEndOfNav; char _everManuallyChangedRoute; char _everManuallyEnabledHFPRoute; char _everViewedAudioSheet; char _everViewedAudioSheetBTAny; char _everViewedAudioSheetBTHFP; unsigned int _manuallyChangedRouteCount; unsigned int _manuallyDisabledHFPCount; unsigned int _manuallyEnabledHFPCount; char _pauseSpokenAudioEnabled; unsigned int _spokenPromptsCount; char _viewedAudioSheet; char _viewedAudioSheetBTAny; char _viewedAudioSheetBTHFP; char _wirelessRoutesAvailable; struct { unsigned char bTHFPAvailableAtEndOfNav : 1; unsigned char bTHFPRoutesAvailable : 1; unsigned char currentRouteHFPEnabledAtEndOfNav : 1; unsigned char currentRouteTypeAtEndOfNav : 1; unsigned char everManuallyChangedRoute : 1; unsigned char everManuallyEnabledHFPRoute : 1; unsigned char everViewedAudioSheet : 1; unsigned char everViewedAudioSheetBTAny : 1; unsigned char everViewedAudioSheetBTHFP : 1; unsigned char manuallyChangedRouteCount : 1; unsigned char manuallyDisabledHFPCount : 1; unsigned char manuallyEnabledHFPCount : 1; unsigned char pauseSpokenAudioEnabled : 1; unsigned char spokenPromptsCount : 1; unsigned char viewedAudioSheet : 1; unsigned char viewedAudioSheetBTAny : 1; unsigned char viewedAudioSheetBTHFP : 1; unsigned char wirelessRoutesAvailable : 1; } _has; } _navigationAudioFeedback;
    NSMutableArray *_directionsFeedbacks;
    double _durationOfTrip;
    GEOLocation *_finalLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _arrivedAtDestination;
    struct { unsigned char has_navigationAudioFeedback : 1; unsigned char has_durationOfTrip : 1; unsigned char has_arrivedAtDestination : 1; unsigned char read_directionsFeedbacks : 1; unsigned char read_finalLocation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *directionsFeedbacks;
@property (readonly, nonatomic) char hasFinalLocation;
@property (retain, nonatomic) GEOLocation *finalLocation;
@property (nonatomic) char hasArrivedAtDestination;
@property (nonatomic) char arrivedAtDestination;
@property (nonatomic) char hasNavigationAudioFeedback;
@property (nonatomic) struct GEONavigationAudioFeedback { char x0; char x1; char x2; int x3; char x4; char x5; char x6; char x7; char x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12; unsigned int x13; char x14; char x15; char x16; char x17; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; } x18; } navigationAudioFeedback;
@property (nonatomic) char hasDurationOfTrip;
@property (nonatomic) double durationOfTrip;

+ (Class)directionsFeedbackType;
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
- (void)addDirectionsFeedback:(id)a0;
- (void)clearDirectionsFeedbacks;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)directionsFeedbackAtIndex:(unsigned long long)a0;
- (unsigned long long)directionsFeedbacksCount;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
