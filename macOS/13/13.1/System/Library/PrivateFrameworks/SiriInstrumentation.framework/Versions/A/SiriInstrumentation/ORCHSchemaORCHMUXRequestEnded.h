@class NSArray, NSString, NSData;

@interface ORCHSchemaORCHMUXRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isMultiUser : 1; unsigned char nlRerunTimeInMs : 1; unsigned char ORCHUserIdentityClassification : 1; unsigned char isOutsider : 1; unsigned char isSelectedUserPartOfMultipleHomes : 1; } _has;
}

@property (nonatomic) BOOL isMultiUser;
@property (nonatomic) BOOL hasIsMultiUser;
@property (nonatomic) unsigned int nlRerunTimeInMs;
@property (nonatomic) BOOL hasNlRerunTimeInMs;
@property (copy, nonatomic) NSArray *userScores;
@property (nonatomic) int ORCHUserIdentityClassification;
@property (nonatomic) BOOL hasORCHUserIdentityClassification;
@property (nonatomic) BOOL isOutsider;
@property (nonatomic) BOOL hasIsOutsider;
@property (copy, nonatomic) NSString *voiceIdAssetVersion;
@property (nonatomic) BOOL hasVoiceIdAssetVersion;
@property (nonatomic) BOOL isSelectedUserPartOfMultipleHomes;
@property (nonatomic) BOOL hasIsSelectedUserPartOfMultipleHomes;
@property (copy, nonatomic) NSString *selectedSharedUserId;
@property (nonatomic) BOOL hasSelectedSharedUserId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteIsMultiUser;
- (void)deleteNlRerunTimeInMs;
- (void)clearUserScores;
- (void)deleteUserScores;
- (void)addUserScores:(id)a0;
- (unsigned long long)userScoresCount;
- (id)userScoresAtIndex:(unsigned long long)a0;
- (void)deleteORCHUserIdentityClassification;
- (void)deleteIsOutsider;
- (void)deleteVoiceIdAssetVersion;
- (void)deleteIsSelectedUserPartOfMultipleHomes;
- (void)deleteSelectedSharedUserId;

@end
