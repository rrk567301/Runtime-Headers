@class NSString, NSData;

@interface ASRSchemaASRIntermediateUtteranceInfoTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *unrepairedPostItn;
@property (nonatomic) char hasUnrepairedPostItn;
@property (copy, nonatomic) NSString *phoneticMatchInput;
@property (nonatomic) char hasPhoneticMatchInput;
@property (copy, nonatomic) NSString *phoneticMatchOutput;
@property (nonatomic) char hasPhoneticMatchOutput;
@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (nonatomic) char hasLoggableSharedUserId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLoggableSharedUserId;
- (void)deletePhoneticMatchInput;
- (void)deletePhoneticMatchOutput;
- (void)deleteUnrepairedPostItn;
- (id)suppressMessageUnderConditions;

@end
