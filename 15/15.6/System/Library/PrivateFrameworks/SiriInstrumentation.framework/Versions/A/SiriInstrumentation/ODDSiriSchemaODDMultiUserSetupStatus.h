@class NSData;

@interface ODDSiriSchemaODDMultiUserSetupStatus : SISchemaInstrumentationMessage {
    struct { unsigned char numGuestsAccepted : 1; unsigned char numParticipantsWithTrust : 1; unsigned char numUsersWhoSyncedRecognizeMyVoice : 1; unsigned char numUsersWithRecognizeMyVoiceEnabled : 1; unsigned char numVoiceProfilesAvailable : 1; unsigned char numUsersWithPersonalRequestsEnabled : 1; unsigned char numUsersWithMatchingSiriLanguage : 1; unsigned char numUsersWithSiriCloudSyncEnabled : 1; unsigned char numUsersWithLocationServicesEnabled : 1; } _has;
}

@property (nonatomic) unsigned int numGuestsAccepted;
@property (nonatomic) char hasNumGuestsAccepted;
@property (nonatomic) unsigned int numParticipantsWithTrust;
@property (nonatomic) char hasNumParticipantsWithTrust;
@property (nonatomic) unsigned int numUsersWhoSyncedRecognizeMyVoice;
@property (nonatomic) char hasNumUsersWhoSyncedRecognizeMyVoice;
@property (nonatomic) unsigned int numUsersWithRecognizeMyVoiceEnabled;
@property (nonatomic) char hasNumUsersWithRecognizeMyVoiceEnabled;
@property (nonatomic) unsigned int numVoiceProfilesAvailable;
@property (nonatomic) char hasNumVoiceProfilesAvailable;
@property (nonatomic) int numUsersWithPersonalRequestsEnabled;
@property (nonatomic) char hasNumUsersWithPersonalRequestsEnabled;
@property (nonatomic) int numUsersWithMatchingSiriLanguage;
@property (nonatomic) char hasNumUsersWithMatchingSiriLanguage;
@property (nonatomic) int numUsersWithSiriCloudSyncEnabled;
@property (nonatomic) char hasNumUsersWithSiriCloudSyncEnabled;
@property (nonatomic) int numUsersWithLocationServicesEnabled;
@property (nonatomic) char hasNumUsersWithLocationServicesEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNumVoiceProfilesAvailable;
- (void)deleteNumGuestsAccepted;
- (void)deleteNumParticipantsWithTrust;
- (void)deleteNumUsersWhoSyncedRecognizeMyVoice;
- (void)deleteNumUsersWithLocationServicesEnabled;
- (void)deleteNumUsersWithMatchingSiriLanguage;
- (void)deleteNumUsersWithPersonalRequestsEnabled;
- (void)deleteNumUsersWithRecognizeMyVoiceEnabled;
- (void)deleteNumUsersWithSiriCloudSyncEnabled;
- (id)suppressMessageUnderConditions;

@end
