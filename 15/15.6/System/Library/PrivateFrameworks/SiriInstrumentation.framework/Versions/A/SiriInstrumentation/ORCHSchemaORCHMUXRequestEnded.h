@class NSArray, NSString, NSData, SISchemaUUID;

@interface ORCHSchemaORCHMUXRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isMultiUser : 1; unsigned char nlRerunTimeInMs : 1; unsigned char ORCHUserIdentityClassification : 1; unsigned char isOutsider : 1; unsigned char isSelectedUserPartOfMultipleHomes : 1; unsigned char nlRerunLatencyInMs : 1; unsigned char voiceIdClassification : 1; } _has;
}

@property (nonatomic) char isMultiUser;
@property (nonatomic) char hasIsMultiUser;
@property (nonatomic) unsigned int nlRerunTimeInMs;
@property (nonatomic) char hasNlRerunTimeInMs;
@property (copy, nonatomic) NSArray *userScores;
@property (nonatomic) int ORCHUserIdentityClassification;
@property (nonatomic) char hasORCHUserIdentityClassification;
@property (nonatomic) char isOutsider;
@property (nonatomic) char hasIsOutsider;
@property (copy, nonatomic) NSString *voiceIdAssetVersion;
@property (nonatomic) char hasVoiceIdAssetVersion;
@property (nonatomic) char isSelectedUserPartOfMultipleHomes;
@property (nonatomic) char hasIsSelectedUserPartOfMultipleHomes;
@property (copy, nonatomic) NSString *selectedSharedUserId;
@property (nonatomic) char hasSelectedSharedUserId;
@property (nonatomic) unsigned long long nlRerunLatencyInMs;
@property (nonatomic) char hasNlRerunLatencyInMs;
@property (retain, nonatomic) SISchemaUUID *selectedUserEphemeralId;
@property (nonatomic) char hasSelectedUserEphemeralId;
@property (copy, nonatomic) NSString *selectedloggableUserIdHash;
@property (nonatomic) char hasSelectedloggableUserIdHash;
@property (copy, nonatomic) NSArray *voiceIdScores;
@property (nonatomic) int voiceIdClassification;
@property (nonatomic) char hasVoiceIdClassification;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearUserScores;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (unsigned long long)userScoresCount;
- (void)addUserScores:(id)a0;
- (void)addVoiceIdScores:(id)a0;
- (void)clearVoiceIdScores;
- (void)deleteIsMultiUser;
- (void)deleteIsOutsider;
- (void)deleteIsSelectedUserPartOfMultipleHomes;
- (void)deleteNlRerunLatencyInMs;
- (void)deleteNlRerunTimeInMs;
- (void)deleteORCHUserIdentityClassification;
- (void)deleteSelectedSharedUserId;
- (void)deleteSelectedUserEphemeralId;
- (void)deleteSelectedloggableUserIdHash;
- (void)deleteUserScores;
- (void)deleteVoiceIdAssetVersion;
- (void)deleteVoiceIdClassification;
- (void)deleteVoiceIdScores;
- (id)suppressMessageUnderConditions;
- (id)userScoresAtIndex:(unsigned long long)a0;
- (id)voiceIdScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)voiceIdScoresCount;

@end
