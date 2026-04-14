@class NSArray, NSData;

@interface IFTSchemaIFTValueDisambiguation : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)addItems:(id)a0;
- (void)deleteExists;
- (unsigned long long)itemsCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteItems;
- (id)initWithJSON:(id)a0;
- (id)itemsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)clearItems;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
