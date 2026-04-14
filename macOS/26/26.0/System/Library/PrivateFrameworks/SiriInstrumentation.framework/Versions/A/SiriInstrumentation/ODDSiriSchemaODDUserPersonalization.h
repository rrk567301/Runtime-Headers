@class NSArray, SISchemaVoiceSettings, NSData;

@interface ODDSiriSchemaODDUserPersonalization : SISchemaInstrumentationMessage {
    struct { unsigned char isPersonalDomainRequestsEnabled : 1; } _has;
}

@property (nonatomic) BOOL isPersonalDomainRequestsEnabled;
@property (nonatomic) BOOL hasIsPersonalDomainRequestsEnabled;
@property (copy, nonatomic) NSArray *activeSubscriptions;
@property (retain, nonatomic) SISchemaVoiceSettings *voiceSettings;
@property (nonatomic) BOOL hasVoiceSettings;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)activeSubscriptionsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)activeSubscriptionsAtIndex:(unsigned long long)a0;
- (void)addActiveSubscriptions:(int)a0;
- (void)clearActiveSubscriptions;
- (void)deleteActiveSubscriptions;
- (void)deleteIsPersonalDomainRequestsEnabled;
- (void)deleteVoiceSettings;

@end
