@class NSArray, NSData;

@interface CNVSchemaCNVActionCandidatesGeneratedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *metadataTier1s;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearMetadataTier1;
- (void)deleteMetadataTier1;
- (void)addMetadataTier1:(id)a0;
- (unsigned long long)metadataTier1Count;
- (id)metadataTier1AtIndex:(unsigned long long)a0;

@end
