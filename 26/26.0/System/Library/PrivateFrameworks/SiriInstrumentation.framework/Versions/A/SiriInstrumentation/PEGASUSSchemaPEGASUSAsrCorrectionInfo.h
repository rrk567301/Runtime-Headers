@class NSArray, NSData;

@interface PEGASUSSchemaPEGASUSAsrCorrectionInfo : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *asrHypothesesInfos;
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
- (void)addAsrHypothesesInfo:(id)a0;
- (id)asrHypothesesInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)asrHypothesesInfoCount;
- (void)clearAsrHypothesesInfo;
- (void)deleteAsrHypothesesInfo;

@end
