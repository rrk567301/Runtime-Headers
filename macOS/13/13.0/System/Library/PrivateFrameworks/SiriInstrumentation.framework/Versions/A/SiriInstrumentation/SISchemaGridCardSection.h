@class NSArray, NSData;

@interface SISchemaGridCardSection : SISchemaInstrumentationMessage {
    struct { unsigned char cardSource : 1; } _has;
}

@property (copy, nonatomic) NSArray *resultIdentifiers;
@property (nonatomic) int cardSource;
@property (nonatomic) BOOL hasCardSource;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)clearResultIdentifiers;
- (void)deleteResultIdentifiers;
- (void)addResultIdentifiers:(id)a0;
- (unsigned long long)resultIdentifiersCount;
- (id)resultIdentifiersAtIndex:(unsigned long long)a0;
- (void)deleteCardSource;

@end
