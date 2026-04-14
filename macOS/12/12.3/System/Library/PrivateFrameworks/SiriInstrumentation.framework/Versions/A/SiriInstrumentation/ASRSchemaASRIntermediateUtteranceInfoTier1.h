@class NSString, NSData;

@interface ASRSchemaASRIntermediateUtteranceInfoTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *unrepairedPostItn;
@property (nonatomic) BOOL hasUnrepairedPostItn;
@property (copy, nonatomic) NSString *phoneticMatchInput;
@property (nonatomic) BOOL hasPhoneticMatchInput;
@property (copy, nonatomic) NSString *phoneticMatchOutput;
@property (nonatomic) BOOL hasPhoneticMatchOutput;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUnrepairedPostItn;
- (void)deletePhoneticMatchInput;
- (void)deletePhoneticMatchOutput;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
