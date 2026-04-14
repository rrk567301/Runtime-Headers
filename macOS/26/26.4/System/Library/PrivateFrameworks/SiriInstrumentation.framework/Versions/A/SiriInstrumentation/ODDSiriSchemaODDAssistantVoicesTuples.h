@class NSArray, NSData;

@interface ODDSiriSchemaODDAssistantVoicesTuples : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *speakingDurationInSecs;
@property (copy, nonatomic) NSArray *autoMOSs;
@property (copy, nonatomic) NSArray *customerPerceivedLatencyInSecs;
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
- (unsigned int)autoMOSAtIndex:(unsigned long long)a0;
- (void)addAutoMOS:(unsigned int)a0;
- (void)addCustomerPerceivedLatencyInSec:(float)a0;
- (void)addSpeakingDurationInSec:(float)a0;
- (unsigned long long)autoMOSCount;
- (void)clearAutoMOS;
- (void)clearCustomerPerceivedLatencyInSec;
- (void)clearSpeakingDurationInSec;
- (float)customerPerceivedLatencyInSecAtIndex:(unsigned long long)a0;
- (unsigned long long)customerPerceivedLatencyInSecCount;
- (void)deleteAutoMOS;
- (void)deleteCustomerPerceivedLatencyInSec;
- (void)deleteSpeakingDurationInSec;
- (float)speakingDurationInSecAtIndex:(unsigned long long)a0;
- (unsigned long long)speakingDurationInSecCount;

@end
