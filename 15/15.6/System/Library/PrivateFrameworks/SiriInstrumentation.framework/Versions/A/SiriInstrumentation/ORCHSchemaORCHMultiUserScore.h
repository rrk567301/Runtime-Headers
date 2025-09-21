@class NSString, NSData, SISchemaUUID;

@interface ORCHSchemaORCHMultiUserScore : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char userScoreIdHash : 1; } _has;
}

@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (nonatomic) char hasLoggableSharedUserId;
@property (nonatomic) unsigned int score;
@property (nonatomic) char hasScore;
@property (retain, nonatomic) SISchemaUUID *userEphemeralId;
@property (nonatomic) char hasUserEphemeralId;
@property (nonatomic) unsigned int userScoreIdHash;
@property (nonatomic) char hasUserScoreIdHash;
@property (copy, nonatomic) NSString *loggableUserIdHash;
@property (nonatomic) char hasLoggableUserIdHash;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLoggableSharedUserId;
- (void)deleteLoggableUserIdHash;
- (void)deleteScore;
- (void)deleteUserEphemeralId;
- (void)deleteUserScoreIdHash;
- (id)suppressMessageUnderConditions;

@end
