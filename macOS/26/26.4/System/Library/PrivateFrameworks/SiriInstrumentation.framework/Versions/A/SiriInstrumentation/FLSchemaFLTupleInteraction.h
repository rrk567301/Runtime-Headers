@class NSArray, NSData;

@interface FLSchemaFLTupleInteraction : SISchemaInstrumentationMessage {
    struct { unsigned char alignment : 1; } _has;
}

@property (copy, nonatomic) NSArray *identifiers;
@property (nonatomic) int alignment;
@property (nonatomic) BOOL hasAlignment;
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
- (void)clearIdentifiers;
- (unsigned long long)identifiersCount;
- (void)deleteAlignment;
- (void)addIdentifiers:(id)a0;
- (void)deleteIdentifiers;
- (id)identifiersAtIndex:(unsigned long long)a0;

@end
