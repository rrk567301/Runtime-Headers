@class NSArray, NSData, SISchemaUUID;

@interface PLUSSchemaPLUSRECTIFIPatternSequenceGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfRequestsReviewed : 1; unsigned char numberOfUniqueRequestsReviewed : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *patternId;
@property (nonatomic) BOOL hasPatternId;
@property (copy, nonatomic) NSArray *sequences;
@property (copy, nonatomic) NSArray *constraints;
@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
@property (nonatomic) unsigned int numberOfRequestsReviewed;
@property (nonatomic) BOOL hasNumberOfRequestsReviewed;
@property (nonatomic) unsigned int numberOfUniqueRequestsReviewed;
@property (nonatomic) BOOL hasNumberOfUniqueRequestsReviewed;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)sequenceCount;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addConstraints:(id)a0;
- (void)clearConstraints;
- (void)deletePatternId;
- (void)addSequence:(id)a0;
- (void)clearSequence;
- (id)constraintsAtIndex:(unsigned long long)a0;
- (unsigned long long)constraintsCount;
- (void)deleteConstraints;
- (void)deleteNumberOfRequestsReviewed;
- (void)deleteNumberOfUniqueRequestsReviewed;
- (void)deleteOriginalRequestId;
- (void)deleteSequence;
- (id)sequenceAtIndex:(unsigned long long)a0;

@end
