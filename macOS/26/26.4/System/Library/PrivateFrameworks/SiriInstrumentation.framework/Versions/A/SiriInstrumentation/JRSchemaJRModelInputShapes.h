@class NSArray, NSData;

@interface JRSchemaJRModelInputShapes : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *candidateTuplesShapes;
@property (copy, nonatomic) NSArray *deviceContextShapes;
@property (copy, nonatomic) NSArray *candidateInteractionsShapes;
@property (copy, nonatomic) NSArray *tupleInteractionsCandidatesShapes;
@property (copy, nonatomic) NSArray *tupleInteractionsAlignmentShapes;
@property (copy, nonatomic) NSArray *similarityScoresShapes;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addCandidateInteractionsShapes:(unsigned int)a0;
- (void)addCandidateTuplesShapes:(unsigned int)a0;
- (void)addDeviceContextShapes:(unsigned int)a0;
- (void)addSimilarityScoresShapes:(unsigned int)a0;
- (void)addTupleInteractionsAlignmentShapes:(unsigned int)a0;
- (void)addTupleInteractionsCandidatesShapes:(unsigned int)a0;
- (unsigned int)candidateInteractionsShapesAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateInteractionsShapesCount;
- (unsigned int)candidateTuplesShapesAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateTuplesShapesCount;
- (void)clearCandidateInteractionsShapes;
- (void)clearCandidateTuplesShapes;
- (void)clearDeviceContextShapes;
- (void)clearSimilarityScoresShapes;
- (void)clearTupleInteractionsAlignmentShapes;
- (void)clearTupleInteractionsCandidatesShapes;
- (void)deleteCandidateInteractionsShapes;
- (void)deleteCandidateTuplesShapes;
- (void)deleteDeviceContextShapes;
- (void)deleteSimilarityScoresShapes;
- (void)deleteTupleInteractionsAlignmentShapes;
- (void)deleteTupleInteractionsCandidatesShapes;
- (unsigned int)deviceContextShapesAtIndex:(unsigned long long)a0;
- (unsigned long long)deviceContextShapesCount;
- (unsigned int)similarityScoresShapesAtIndex:(unsigned long long)a0;
- (unsigned long long)similarityScoresShapesCount;
- (unsigned int)tupleInteractionsAlignmentShapesAtIndex:(unsigned long long)a0;
- (unsigned long long)tupleInteractionsAlignmentShapesCount;
- (unsigned int)tupleInteractionsCandidatesShapesAtIndex:(unsigned long long)a0;
- (unsigned long long)tupleInteractionsCandidatesShapesCount;

@end
