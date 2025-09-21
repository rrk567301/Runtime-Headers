@class NSData, SUTSchemaTestContext;

@interface SUTSchemaTestExecutionBegin : SISchemaInstrumentationMessage {
    struct { unsigned char shouldPersistData : 1; } _has;
}

@property (retain, nonatomic) SUTSchemaTestContext *context;
@property (nonatomic) char hasContext;
@property (nonatomic) char shouldPersistData;
@property (nonatomic) char hasShouldPersistData;
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
- (void)deleteContext;
- (void)deleteShouldPersistData;
- (id)suppressMessageUnderConditions;

@end
