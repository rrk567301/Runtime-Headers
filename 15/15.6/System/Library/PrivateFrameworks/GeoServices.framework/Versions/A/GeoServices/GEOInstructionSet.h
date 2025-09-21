@class NSString, GEOFormattedString, GEODrivingWalkingInstruction, GEODrivingWalkingSpokenInstruction, PBDataReader, PBUnknownFields, GEOTransitListInstruction, GEOTransitSignInstruction, GEOGenericInstruction;
@protocol GEOServerFormattedString;

@interface GEOInstructionSet : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_countStopsText;
    GEOFormattedString *_departureBar;
    GEODrivingWalkingInstruction *_drivingWalkingListInstruction;
    GEODrivingWalkingInstruction *_drivingWalkingSignInstruction;
    GEODrivingWalkingSpokenInstruction *_drivingWalkingSpokenInstruction;
    GEOGenericInstruction *_genericInstruction;
    GEOTransitListInstruction *_transitListInstruction;
    GEOTransitSignInstruction *_transitSignInstruction;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _departureBarStyle;
    struct { unsigned char has_departureBarStyle : 1; unsigned char read_unknownFields : 1; unsigned char read_countStopsText : 1; unsigned char read_departureBar : 1; unsigned char read_drivingWalkingListInstruction : 1; unsigned char read_drivingWalkingSignInstruction : 1; unsigned char read_drivingWalkingSpokenInstruction : 1; unsigned char read_genericInstruction : 1; unsigned char read_transitListInstruction : 1; unsigned char read_transitSignInstruction : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<GEOServerFormattedString> departureBarFormattedString;
@property (readonly, nonatomic) long long departureBarFormatStyle;
@property (readonly, nonatomic) id<GEOServerFormattedString> countStopsFormattedString;
@property (readonly, nonatomic) id<GEOServerFormattedString> expandableListFormattedString;
@property (readonly, nonatomic) id<GEOServerFormattedString> primaryTimeFormattedString;
@property (readonly, nonatomic) id<GEOServerFormattedString> secondaryTimeFormattedString;
@property (readonly, nonatomic) char hideTimeInstructionsIfCollapsed;
@property (readonly, nonatomic) char hasTransitSignInstruction;
@property (retain, nonatomic) GEOTransitSignInstruction *transitSignInstruction;
@property (readonly, nonatomic) char hasTransitListInstruction;
@property (retain, nonatomic) GEOTransitListInstruction *transitListInstruction;
@property (readonly, nonatomic) char hasGenericInstruction;
@property (retain, nonatomic) GEOGenericInstruction *genericInstruction;
@property (readonly, nonatomic) char hasDepartureBar;
@property (retain, nonatomic) GEOFormattedString *departureBar;
@property (nonatomic) char hasDepartureBarStyle;
@property (nonatomic) int departureBarStyle;
@property (readonly, nonatomic) char hasCountStopsText;
@property (retain, nonatomic) GEOFormattedString *countStopsText;
@property (readonly, nonatomic) char hasDrivingWalkingSignInstruction;
@property (retain, nonatomic) GEODrivingWalkingInstruction *drivingWalkingSignInstruction;
@property (readonly, nonatomic) char hasDrivingWalkingListInstruction;
@property (retain, nonatomic) GEODrivingWalkingInstruction *drivingWalkingListInstruction;
@property (readonly, nonatomic) char hasDrivingWalkingSpokenInstruction;
@property (retain, nonatomic) GEODrivingWalkingSpokenInstruction *drivingWalkingSpokenInstruction;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
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
- (int)StringAsDepartureBarStyle:(id)a0;
- (char)_transit_hasAnyFieldSet;
- (void)_transit_mergeFrom:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)departureBarStyleAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
