@class NSArray, NSData, SISchemaUUID;

@interface PLUSSchemaPLUSRECTIFIPatternSequenceGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *patternId;
@property (nonatomic) BOOL hasPatternId;
@property (copy, nonatomic) NSArray *sequences;
@property (copy, nonatomic) NSArray *constraints;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addConstraints:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)sequenceCount;
- (void)clearConstraints;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePatternId;
- (void)clearSequence;
- (void)deleteSequence;
- (void)addSequence:(id)a0;
- (id)sequenceAtIndex:(unsigned long long)a0;
- (void)deleteConstraints;
- (unsigned long long)constraintsCount;
- (id)constraintsAtIndex:(unsigned long long)a0;

@end
