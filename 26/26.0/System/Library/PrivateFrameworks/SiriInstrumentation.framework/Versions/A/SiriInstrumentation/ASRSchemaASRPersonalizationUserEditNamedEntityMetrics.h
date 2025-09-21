@class NSArray, NSData;

@interface ASRSchemaASRPersonalizationUserEditNamedEntityMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char numTotalEdit : 1; } _has;
}

@property (nonatomic) unsigned int numTotalEdit;
@property (nonatomic) BOOL hasNumTotalEdit;
@property (copy, nonatomic) NSArray *namedEntityUserEdits;
@property (copy, nonatomic) NSArray *lmeOverActivationEdits;
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
- (void)addLmeOverActivationEdits:(id)a0;
- (void)addNamedEntityUserEdits:(id)a0;
- (void)clearLmeOverActivationEdits;
- (void)clearNamedEntityUserEdits;
- (void)deleteLmeOverActivationEdits;
- (void)deleteNamedEntityUserEdits;
- (void)deleteNumTotalEdit;
- (id)lmeOverActivationEditsAtIndex:(unsigned long long)a0;
- (unsigned long long)lmeOverActivationEditsCount;
- (id)namedEntityUserEditsAtIndex:(unsigned long long)a0;
- (unsigned long long)namedEntityUserEditsCount;

@end
