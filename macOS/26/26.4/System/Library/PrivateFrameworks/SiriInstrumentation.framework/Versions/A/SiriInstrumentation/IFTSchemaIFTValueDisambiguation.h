@class NSArray, NSData;

@interface IFTSchemaIFTValueDisambiguation : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)itemsAtIndex:(unsigned long long)a0;
- (void)deleteExists;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)deleteItems;
- (id)dictionaryRepresentation;
- (unsigned long long)itemsCount;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearItems;
- (void)writeTo:(id)a0;
- (void)addItems:(id)a0;
- (id)initWithJSON:(id)a0;

@end
