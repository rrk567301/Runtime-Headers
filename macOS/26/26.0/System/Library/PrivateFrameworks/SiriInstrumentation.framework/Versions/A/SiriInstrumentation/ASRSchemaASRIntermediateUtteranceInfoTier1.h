@class NSString, NSData;

@interface ASRSchemaASRIntermediateUtteranceInfoTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *unrepairedPostItn;
@property (nonatomic) BOOL hasUnrepairedPostItn;
@property (copy, nonatomic) NSString *phoneticMatchInput;
@property (nonatomic) BOOL hasPhoneticMatchInput;
@property (copy, nonatomic) NSString *phoneticMatchOutput;
@property (nonatomic) BOOL hasPhoneticMatchOutput;
@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (nonatomic) BOOL hasLoggableSharedUserId;
@property (copy, nonatomic) NSString *loggableUserIdHash;
@property (nonatomic) BOOL hasLoggableUserIdHash;
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
- (void)deleteLoggableSharedUserId;
- (void)deleteLoggableUserIdHash;
- (void)deletePhoneticMatchInput;
- (void)deletePhoneticMatchOutput;
- (void)deleteUnrepairedPostItn;

@end
