@class NSString, NSData;

@interface DIMSchemaDIMSiriAccountInformation : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *siriDeviceId;
@property (nonatomic) BOOL hasSiriDeviceId;
@property (copy, nonatomic) NSString *siriSpeechId;
@property (nonatomic) BOOL hasSiriSpeechId;
@property (copy, nonatomic) NSString *siriUserId;
@property (nonatomic) BOOL hasSiriUserId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSiriDeviceId;
- (void)deleteSiriSpeechId;
- (void)deleteSiriUserId;
- (id)suppressMessageUnderConditions;

@end
