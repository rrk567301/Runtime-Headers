@class NSData, GEORPUserSearchInput, NSMutableArray, PBDataReader;

@interface GEORPDirectionsProblem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_clientSuggestedRoutes;
    NSData *_directionsResponseId;
    GEORPUserSearchInput *_endWaypoint;
    NSMutableArray *_instructionCorrections;
    NSData *_overviewScreenshotImageData;
    NSMutableArray *_problematicRouteIndexs;
    GEORPUserSearchInput *_startWaypoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _problematicLineIndex;
    unsigned int _problematicStepIndex;
    struct { unsigned char has_problematicLineIndex : 1; unsigned char has_problematicStepIndex : 1; unsigned char read_clientSuggestedRoutes : 1; unsigned char read_directionsResponseId : 1; unsigned char read_endWaypoint : 1; unsigned char read_instructionCorrections : 1; unsigned char read_overviewScreenshotImageData : 1; unsigned char read_problematicRouteIndexs : 1; unsigned char read_startWaypoint : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasDirectionsResponseId;
@property (retain, nonatomic) NSData *directionsResponseId;
@property (readonly, nonatomic) char hasOverviewScreenshotImageData;
@property (retain, nonatomic) NSData *overviewScreenshotImageData;
@property (nonatomic) char hasProblematicStepIndex;
@property (nonatomic) unsigned int problematicStepIndex;
@property (retain, nonatomic) NSMutableArray *clientSuggestedRoutes;
@property (retain, nonatomic) NSMutableArray *problematicRouteIndexs;
@property (nonatomic) char hasProblematicLineIndex;
@property (nonatomic) unsigned int problematicLineIndex;
@property (readonly, nonatomic) char hasStartWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput *startWaypoint;
@property (readonly, nonatomic) char hasEndWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput *endWaypoint;
@property (retain, nonatomic) NSMutableArray *instructionCorrections;

+ (Class)clientSuggestedRouteType;
+ (Class)instructionCorrectionType;
+ (char)isValid:(id)a0;
+ (Class)problematicRouteIndexType;

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
- (void)addClientSuggestedRoute:(id)a0;
- (void)addInstructionCorrection:(id)a0;
- (void)addProblematicRouteIndex:(id)a0;
- (void)clearClientSuggestedRoutes;
- (void)clearInstructionCorrections;
- (void)clearProblematicRouteIndexs;
- (id)clientSuggestedRouteAtIndex:(unsigned long long)a0;
- (unsigned long long)clientSuggestedRoutesCount;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)instructionCorrectionAtIndex:(unsigned long long)a0;
- (unsigned long long)instructionCorrectionsCount;
- (id)jsonRepresentation;
- (id)problematicRouteIndexAtIndex:(unsigned long long)a0;
- (unsigned long long)problematicRouteIndexsCount;
- (void)readAll:(char)a0;

@end
