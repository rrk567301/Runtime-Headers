@class NSArray, NSData, SISchemaUUID, QDSchemaQDEntityType;

@interface QDSchemaQDSpanMatchedEntity : SISchemaInstrumentationMessage {
    struct { unsigned char dataProtectionClass : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sessionScopedUniqueId;
@property (nonatomic) char hasSessionScopedUniqueId;
@property (retain, nonatomic) QDSchemaQDEntityType *valueType;
@property (nonatomic) char hasValueType;
@property (copy, nonatomic) NSArray *matches;
@property (nonatomic) int dataProtectionClass;
@property (nonatomic) char hasDataProtectionClass;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)matchesAtIndex:(unsigned long long)a0;
- (void)addMatches:(id)a0;
- (void)clearMatches;
- (id)initWithJSON:(id)a0;
- (unsigned long long)matchesCount;
- (void)deleteValueType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDataProtectionClass;
- (void)deleteMatches;
- (void)deleteSessionScopedUniqueId;
- (id)suppressMessageUnderConditions;

@end
