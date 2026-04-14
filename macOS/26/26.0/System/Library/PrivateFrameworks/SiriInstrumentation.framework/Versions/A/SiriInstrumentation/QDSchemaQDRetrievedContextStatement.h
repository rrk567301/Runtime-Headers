@class NSData, QDSchemaQDEntityType, SISchemaUUID;

@interface QDSchemaQDRetrievedContextStatement : SISchemaInstrumentationMessage {
    struct { unsigned char contextType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sessionScopedUniqueId;
@property (nonatomic) BOOL hasSessionScopedUniqueId;
@property (nonatomic) int contextType;
@property (nonatomic) BOOL hasContextType;
@property (retain, nonatomic) QDSchemaQDEntityType *valueType;
@property (nonatomic) BOOL hasValueType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteValueType;
- (void)deleteContextType;
- (void)deleteSessionScopedUniqueId;

@end
