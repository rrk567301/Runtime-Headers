@class NSString, NSData;

@interface DIMSchemaDIMSiriAccountInformation : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *siriDeviceId;
@property (nonatomic) char hasSiriDeviceId;
@property (copy, nonatomic) NSString *siriSpeechId;
@property (nonatomic) char hasSiriSpeechId;
@property (copy, nonatomic) NSString *siriUserId;
@property (nonatomic) char hasSiriUserId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSiriDeviceId;
- (void)deleteSiriSpeechId;
- (void)deleteSiriUserId;
- (id)suppressMessageUnderConditions;

@end
