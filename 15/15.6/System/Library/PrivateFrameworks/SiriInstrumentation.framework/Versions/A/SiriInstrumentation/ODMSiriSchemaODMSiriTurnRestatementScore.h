@class NSData, SISchemaUUID;

@interface ODMSiriSchemaODMSiriTurnRestatementScore : SISchemaInstrumentationMessage {
    struct { unsigned char isUserRequest : 1; unsigned char utteranceRestatementScore : 1; unsigned char phoneticRestatementScore : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *currentTurnId;
@property (nonatomic) char hasCurrentTurnId;
@property (retain, nonatomic) SISchemaUUID *nextTurnId;
@property (nonatomic) char hasNextTurnId;
@property (nonatomic) char isUserRequest;
@property (nonatomic) char hasIsUserRequest;
@property (nonatomic) double utteranceRestatementScore;
@property (nonatomic) char hasUtteranceRestatementScore;
@property (nonatomic) double phoneticRestatementScore;
@property (nonatomic) char hasPhoneticRestatementScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUtteranceRestatementScore;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCurrentTurnId;
- (void)deleteIsUserRequest;
- (void)deleteNextTurnId;
- (void)deletePhoneticRestatementScore;
- (id)suppressMessageUnderConditions;

@end
