@class NSData, QDSchemaQDEntityType, SISchemaUUID;

@interface QDSchemaQDRetrievedContextStatement : SISchemaInstrumentationMessage {
    struct { unsigned char contextType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sessionScopedUniqueId;
@property (nonatomic) char hasSessionScopedUniqueId;
@property (nonatomic) int contextType;
@property (nonatomic) char hasContextType;
@property (retain, nonatomic) QDSchemaQDEntityType *valueType;
@property (nonatomic) char hasValueType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteValueType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteContextType;
- (void)deleteSessionScopedUniqueId;
- (id)suppressMessageUnderConditions;

@end
