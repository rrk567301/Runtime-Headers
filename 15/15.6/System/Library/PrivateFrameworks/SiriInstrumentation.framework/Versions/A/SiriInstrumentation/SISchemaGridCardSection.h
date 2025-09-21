@class NSArray, NSData;

@interface SISchemaGridCardSection : SISchemaInstrumentationMessage {
    struct { unsigned char cardSource : 1; } _has;
}

@property (copy, nonatomic) NSArray *resultIdentifiers;
@property (nonatomic) int cardSource;
@property (nonatomic) char hasCardSource;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addResultIdentifiers:(id)a0;
- (void)clearResultIdentifiers;
- (void)deleteCardSource;
- (void)deleteResultIdentifiers;
- (id)resultIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)resultIdentifiersCount;
- (id)suppressMessageUnderConditions;

@end
