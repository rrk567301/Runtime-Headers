@class NSArray, NSData;

@interface JRSchemaSegmentedTupleCount : SISchemaInstrumentationMessage {
    struct { unsigned char count : 1; } _has;
}

@property (copy, nonatomic) NSArray *tupleCandidates;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteCount;
- (void)addTupleCandidates:(id)a0;
- (void)clearTupleCandidates;
- (void)deleteTupleCandidates;
- (id)tupleCandidatesAtIndex:(unsigned long long)a0;
- (unsigned long long)tupleCandidatesCount;

@end
