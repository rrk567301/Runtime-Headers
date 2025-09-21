@class NSString, NSData, GEOLatLng, PBDataReader;

@interface GEORPDirectionsEvent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    long long _errorCode;
    NSString *_errorDomain;
    GEOLatLng *_occurrenceLatLng;
    NSData *_occurrenceRouteId;
    NSData *_switchedToRouteId;
    NSString *_synthesizedStepInstructions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _occurrenceResponseIndex;
    unsigned int _occurrenceStepIndex;
    unsigned int _switchedToResponseIndex;
    int _synthesizedStepManeuverType;
    int _type;
    struct { unsigned char has_errorCode : 1; unsigned char has_occurrenceResponseIndex : 1; unsigned char has_occurrenceStepIndex : 1; unsigned char has_switchedToResponseIndex : 1; unsigned char has_synthesizedStepManeuverType : 1; unsigned char has_type : 1; unsigned char read_errorDomain : 1; unsigned char read_occurrenceLatLng : 1; unsigned char read_occurrenceRouteId : 1; unsigned char read_switchedToRouteId : 1; unsigned char read_synthesizedStepInstructions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasOccurrenceResponseIndex;
@property (nonatomic) unsigned int occurrenceResponseIndex;
@property (readonly, nonatomic) char hasOccurrenceRouteId;
@property (retain, nonatomic) NSData *occurrenceRouteId;
@property (nonatomic) char hasOccurrenceStepIndex;
@property (nonatomic) unsigned int occurrenceStepIndex;
@property (readonly, nonatomic) char hasOccurrenceLatLng;
@property (retain, nonatomic) GEOLatLng *occurrenceLatLng;
@property (nonatomic) char hasSwitchedToResponseIndex;
@property (nonatomic) unsigned int switchedToResponseIndex;
@property (readonly, nonatomic) char hasSwitchedToRouteId;
@property (retain, nonatomic) NSData *switchedToRouteId;
@property (nonatomic) char hasSynthesizedStepManeuverType;
@property (nonatomic) int synthesizedStepManeuverType;
@property (readonly, nonatomic) char hasSynthesizedStepInstructions;
@property (retain, nonatomic) NSString *synthesizedStepInstructions;
@property (readonly, nonatomic) char hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) long long errorCode;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsSynthesizedStepManeuverType:(id)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)synthesizedStepManeuverTypeAsString:(int)a0;

@end
