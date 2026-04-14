@class NSArray, NSData, SISchemaUUID, QDSchemaQDEntityType;

@interface QDSchemaQDSpanMatchedEntity : SISchemaInstrumentationMessage {
    struct { unsigned char dataProtectionClass : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sessionScopedUniqueId;
@property (nonatomic) BOOL hasSessionScopedUniqueId;
@property (retain, nonatomic) QDSchemaQDEntityType *valueType;
@property (nonatomic) BOOL hasValueType;
@property (copy, nonatomic) NSArray *matches;
@property (nonatomic) int dataProtectionClass;
@property (nonatomic) BOOL hasDataProtectionClass;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)matchesAtIndex:(unsigned long long)a0;
- (void)addMatches:(id)a0;
- (void)clearMatches;
- (unsigned long long)matchesCount;
- (void)deleteValueType;
- (void)deleteDataProtectionClass;
- (void)deleteMatches;
- (void)deleteSessionScopedUniqueId;

@end
