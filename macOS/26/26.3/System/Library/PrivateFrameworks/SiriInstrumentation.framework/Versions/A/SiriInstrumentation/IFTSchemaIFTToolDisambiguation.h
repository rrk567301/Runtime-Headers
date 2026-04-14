@class NSString, NSArray, NSData;

@interface IFTSchemaIFTToolDisambiguation : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (copy, nonatomic) NSString *assistantSchemaKind;
@property (nonatomic) BOOL hasAssistantSchemaKind;
@property (copy, nonatomic) NSArray *tools;
@property (readonly, nonatomic) NSData *jsonData;

- (void)deleteExists;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addTools:(id)a0;
- (void)clearTools;
- (void)deleteAssistantSchemaKind;
- (void)deleteTools;
- (id)toolsAtIndex:(unsigned long long)a0;
- (unsigned long long)toolsCount;

@end
