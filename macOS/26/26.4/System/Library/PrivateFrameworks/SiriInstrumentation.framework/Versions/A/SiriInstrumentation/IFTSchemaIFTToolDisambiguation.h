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

- (id)suppressMessageUnderConditions;
- (void)deleteExists;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addTools:(id)a0;
- (void)clearTools;
- (void)deleteAssistantSchemaKind;
- (void)deleteTools;
- (id)toolsAtIndex:(unsigned long long)a0;
- (unsigned long long)toolsCount;

@end
