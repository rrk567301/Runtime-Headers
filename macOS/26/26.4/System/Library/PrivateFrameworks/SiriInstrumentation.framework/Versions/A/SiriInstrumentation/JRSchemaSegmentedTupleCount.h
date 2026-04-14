@class NSArray, NSData;

@interface JRSchemaSegmentedTupleCount : SISchemaInstrumentationMessage {
    struct { unsigned char count : 1; } _has;
}

@property (copy, nonatomic) NSArray *tupleCandidates;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteCount;
- (void)addTupleCandidates:(id)a0;
- (void)clearTupleCandidates;
- (void)deleteTupleCandidates;
- (id)tupleCandidatesAtIndex:(unsigned long long)a0;
- (unsigned long long)tupleCandidatesCount;

@end
