@class GEORPCorrectedCoordinate, NSString, PBDataReader, NSData, NSMutableArray, PBUnknownFields;

@interface GEORPDirectionsCorrections : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPCorrectedCoordinate *_arrivalCoordinate;
    NSData *_directionsResponseId;
    NSMutableArray *_instructionCorrections;
    NSString *_overviewScreenshotImageId;
    NSMutableArray *_problematicRouteIndexs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _noGoodRoutesShown;
    struct { unsigned char has_noGoodRoutesShown : 1; unsigned char read_unknownFields : 1; unsigned char read_arrivalCoordinate : 1; unsigned char read_directionsResponseId : 1; unsigned char read_instructionCorrections : 1; unsigned char read_overviewScreenshotImageId : 1; unsigned char read_problematicRouteIndexs : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasDirectionsResponseId;
@property (retain, nonatomic) NSData *directionsResponseId;
@property (retain, nonatomic) NSMutableArray *problematicRouteIndexs;
@property (retain, nonatomic) NSMutableArray *instructionCorrections;
@property (readonly, nonatomic) char hasOverviewScreenshotImageId;
@property (retain, nonatomic) NSString *overviewScreenshotImageId;
@property (readonly, nonatomic) char hasArrivalCoordinate;
@property (retain, nonatomic) GEORPCorrectedCoordinate *arrivalCoordinate;
@property (nonatomic) char hasNoGoodRoutesShown;
@property (nonatomic) char noGoodRoutesShown;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)addInstructionCorrection:(id)a0;
- (void)addProblematicRouteIndex:(id)a0;
- (void)clearInstructionCorrections;
- (void)clearProblematicRouteIndexs;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)instructionCorrectionAtIndex:(unsigned long long)a0;
- (unsigned long long)instructionCorrectionsCount;
- (id)jsonRepresentation;
- (id)problematicRouteIndexAtIndex:(unsigned long long)a0;
- (unsigned long long)problematicRouteIndexsCount;
- (void)readAll:(char)a0;

@end
