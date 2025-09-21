@class SISchemaInstrumentationMessage, DonationSchemaSDSpeechDonationEventMetaData, NSData, DonationSchemaSDSpeechSampleDonation;

@interface DonationSchemaSDSpeechDonationEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) DonationSchemaSDSpeechDonationEventMetaData *eventMetaData;
@property (nonatomic) BOOL hasEventMetaData;
@property (retain, nonatomic) DonationSchemaSDSpeechSampleDonation *speechSampleDonation;
@property (nonatomic) BOOL hasSpeechSampleDonation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)clockIsolationLevel;
- (void)deleteEventMetaData;
- (void)deleteSpeechSampleDonation;
- (unsigned long long)whichInnerEventType;

@end
