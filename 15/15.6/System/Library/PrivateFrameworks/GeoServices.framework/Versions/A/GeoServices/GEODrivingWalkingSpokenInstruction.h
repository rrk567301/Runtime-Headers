@class PBDataReader, GEOFormattedString, NSMutableArray, PBUnknownFields;

@interface GEODrivingWalkingSpokenInstruction : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_continueStage;
    NSMutableArray *_executionStages;
    GEOFormattedString *_initialStage;
    GEOFormattedString *_preparationStage;
    GEOFormattedString *_proceedStage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _shortChainedInstructionIndex;
    struct { unsigned char has_shortChainedInstructionIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_continueStage : 1; unsigned char read_executionStages : 1; unsigned char read_initialStage : 1; unsigned char read_preparationStage : 1; unsigned char read_proceedStage : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasProceedStage;
@property (retain, nonatomic) GEOFormattedString *proceedStage;
@property (readonly, nonatomic) char hasContinueStage;
@property (retain, nonatomic) GEOFormattedString *continueStage;
@property (readonly, nonatomic) char hasInitialStage;
@property (retain, nonatomic) GEOFormattedString *initialStage;
@property (readonly, nonatomic) char hasPreparationStage;
@property (retain, nonatomic) GEOFormattedString *preparationStage;
@property (retain, nonatomic) NSMutableArray *executionStages;
@property (nonatomic) char hasShortChainedInstructionIndex;
@property (nonatomic) unsigned int shortChainedInstructionIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)executionStageType;
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
- (void)addExecutionStage:(id)a0;
- (void)clearExecutionStages;
- (void)clearUnknownFields:(char)a0;
- (id)executionStageAtIndex:(unsigned long long)a0;
- (unsigned long long)executionStagesCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
