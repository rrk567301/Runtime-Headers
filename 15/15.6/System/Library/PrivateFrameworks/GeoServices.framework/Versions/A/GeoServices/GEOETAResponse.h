@class NSString, GEOPDDatasetABStatus, PBDataReader, PBUnknownFields, GEOETAResult, NSMutableArray, GEOPlaceSearchResponse, GEOCommonResponseAttributes, GEOClientMetrics;

@interface GEOETAResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOProblemDetail { int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_problemDetails;
    unsigned long long _problemDetailsCount;
    unsigned long long _problemDetailsSpace;
    GEOClientMetrics *_clientMetrics;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSString *_debugData;
    NSMutableArray *_etaResultReferencePointDestinations;
    GEOETAResult *_etaResultReferencePointOrigin;
    NSMutableArray *_etaResults;
    GEOPlaceSearchResponse *_originPlaceSearchResponse;
    GEOCommonResponseAttributes *_responseAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _status;
    struct { unsigned char has_status : 1; unsigned char read_unknownFields : 1; unsigned char read_problemDetails : 1; unsigned char read_clientMetrics : 1; unsigned char read_datasetAbStatus : 1; unsigned char read_debugData : 1; unsigned char read_etaResultReferencePointDestinations : 1; unsigned char read_etaResultReferencePointOrigin : 1; unsigned char read_etaResults : 1; unsigned char read_originPlaceSearchResponse : 1; unsigned char read_responseAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasClientMetrics;
@property (retain, nonatomic) GEOClientMetrics *clientMetrics;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *etaResults;
@property (readonly, nonatomic) char hasOriginPlaceSearchResponse;
@property (retain, nonatomic) GEOPlaceSearchResponse *originPlaceSearchResponse;
@property (readonly, nonatomic) unsigned long long problemDetailsCount;
@property (readonly, nonatomic) struct GEOProblemDetail { int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *problemDetails;
@property (readonly, nonatomic) char hasEtaResultReferencePointOrigin;
@property (retain, nonatomic) GEOETAResult *etaResultReferencePointOrigin;
@property (retain, nonatomic) NSMutableArray *etaResultReferencePointDestinations;
@property (readonly, nonatomic) char hasDatasetAbStatus;
@property (retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property (readonly, nonatomic) char hasDebugData;
@property (retain, nonatomic) NSString *debugData;
@property (readonly, nonatomic) char hasResponseAttributes;
@property (retain, nonatomic) GEOCommonResponseAttributes *responseAttributes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)etaResultReferencePointDestinationType;
+ (Class)etaResultType;
+ (char)isValid:(id)a0;

- (void)dealloc;
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
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (void)clearEtaResults;
- (unsigned long long)etaResultsCount;
- (void)addEtaResult:(id)a0;
- (void)addEtaResultReferencePointDestination:(id)a0;
- (void)addProblemDetail:(struct GEOProblemDetail { int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })a0;
- (void)clearEtaResultReferencePointDestinations;
- (void)clearProblemDetails;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearUnknownFields:(char)a0;
- (id)etaResultAtIndex:(unsigned long long)a0;
- (id)etaResultReferencePointDestinationAtIndex:(unsigned long long)a0;
- (unsigned long long)etaResultReferencePointDestinationsCount;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (struct GEOProblemDetail { int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })problemDetailAtIndex:(unsigned long long)a0;
- (void)readAll:(char)a0;
- (void)setProblemDetails:(struct GEOProblemDetail { int x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *)a0 count:(unsigned long long)a1;

@end
