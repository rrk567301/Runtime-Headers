@class NSData, SCSchemaSCCheckUndoResponse;

@interface SCSchemaSCUndoChecked : SISchemaInstrumentationMessage

@property (retain, nonatomic) SCSchemaSCCheckUndoResponse *checkUndoResponse;
@property (nonatomic) BOOL hasCheckUndoResponse;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteCheckUndoResponse;

@end
