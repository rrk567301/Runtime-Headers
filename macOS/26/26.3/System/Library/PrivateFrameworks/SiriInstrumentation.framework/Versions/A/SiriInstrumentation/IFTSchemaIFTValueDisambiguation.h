@class NSArray, NSData;

@interface IFTSchemaIFTValueDisambiguation : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSData *jsonData;

- (void)deleteExists;
- (id)dictionaryRepresentation;
- (void)clearItems;
- (id)itemsAtIndex:(unsigned long long)a0;
- (unsigned long long)itemsCount;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteItems;
- (id)initWithDictionary:(id)a0;
- (void)addItems:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
