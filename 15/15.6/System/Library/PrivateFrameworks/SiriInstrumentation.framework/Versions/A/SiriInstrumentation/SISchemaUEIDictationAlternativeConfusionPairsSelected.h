@class NSArray, NSData;

@interface SISchemaUEIDictationAlternativeConfusionPairsSelected : SISchemaInstrumentationMessage {
    struct { unsigned char numDeletions : 1; unsigned char numInsertions : 1; unsigned char numSubstitutions : 1; } _has;
}

@property (copy, nonatomic) NSArray *alternativeSelections;
@property (nonatomic) int numDeletions;
@property (nonatomic) char hasNumDeletions;
@property (nonatomic) int numInsertions;
@property (nonatomic) char hasNumInsertions;
@property (nonatomic) int numSubstitutions;
@property (nonatomic) char hasNumSubstitutions;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addAlternativeSelections:(id)a0;
- (id)alternativeSelectionsAtIndex:(unsigned long long)a0;
- (unsigned long long)alternativeSelectionsCount;
- (void)clearAlternativeSelections;
- (void)deleteAlternativeSelections;
- (void)deleteNumDeletions;
- (void)deleteNumInsertions;
- (void)deleteNumSubstitutions;
- (id)suppressMessageUnderConditions;

@end
