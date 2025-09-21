@class NSData, SUTSchemaTestContext;

@interface SUTSchemaTestExecutionBegin : SISchemaInstrumentationMessage {
    struct { unsigned char shouldPersistData : 1; } _has;
}

@property (retain, nonatomic) SUTSchemaTestContext *context;
@property (nonatomic) BOOL hasContext;
@property (nonatomic) BOOL shouldPersistData;
@property (nonatomic) BOOL hasShouldPersistData;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteContext;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteShouldPersistData;

@end
