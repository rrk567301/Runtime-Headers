@class NSArray, NSData;

@interface PEGASUSSchemaPEGASUSAsrCorrectionInfo : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *asrHypothesesInfos;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addAsrHypothesesInfo:(id)a0;
- (id)asrHypothesesInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)asrHypothesesInfoCount;
- (void)clearAsrHypothesesInfo;
- (void)deleteAsrHypothesesInfo;

@end
