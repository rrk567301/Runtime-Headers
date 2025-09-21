@class NSString, NSArray, NSData;

@interface IFTSchemaIFTToolDisambiguation : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (copy, nonatomic) NSString *assistantSchemaKind;
@property (nonatomic) char hasAssistantSchemaKind;
@property (copy, nonatomic) NSArray *tools;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addTools:(id)a0;
- (void)clearTools;
- (void)deleteAssistantSchemaKind;
- (void)deleteExists;
- (void)deleteTools;
- (id)suppressMessageUnderConditions;
- (id)toolsAtIndex:(unsigned long long)a0;
- (unsigned long long)toolsCount;

@end
