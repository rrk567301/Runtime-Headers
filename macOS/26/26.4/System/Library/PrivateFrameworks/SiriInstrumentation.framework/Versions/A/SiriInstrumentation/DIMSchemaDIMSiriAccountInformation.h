@class NSString, NSData;

@interface DIMSchemaDIMSiriAccountInformation : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *siriDeviceId;
@property (nonatomic) BOOL hasSiriDeviceId;
@property (copy, nonatomic) NSString *siriSpeechId;
@property (nonatomic) BOOL hasSiriSpeechId;
@property (copy, nonatomic) NSString *siriUserId;
@property (nonatomic) BOOL hasSiriUserId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSiriDeviceId;
- (void)deleteSiriSpeechId;
- (void)deleteSiriUserId;

@end
