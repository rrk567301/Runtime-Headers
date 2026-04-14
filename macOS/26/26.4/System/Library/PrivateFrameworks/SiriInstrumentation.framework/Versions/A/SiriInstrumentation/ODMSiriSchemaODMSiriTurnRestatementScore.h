@class NSData, SISchemaUUID;

@interface ODMSiriSchemaODMSiriTurnRestatementScore : SISchemaInstrumentationMessage {
    struct { unsigned char isUserRequest : 1; unsigned char utteranceRestatementScore : 1; unsigned char phoneticRestatementScore : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *currentTurnId;
@property (nonatomic) BOOL hasCurrentTurnId;
@property (retain, nonatomic) SISchemaUUID *nextTurnId;
@property (nonatomic) BOOL hasNextTurnId;
@property (nonatomic) BOOL isUserRequest;
@property (nonatomic) BOOL hasIsUserRequest;
@property (nonatomic) double utteranceRestatementScore;
@property (nonatomic) BOOL hasUtteranceRestatementScore;
@property (nonatomic) double phoneticRestatementScore;
@property (nonatomic) BOOL hasPhoneticRestatementScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUtteranceRestatementScore;
- (void)deleteCurrentTurnId;
- (void)deleteIsUserRequest;
- (void)deleteNextTurnId;
- (void)deletePhoneticRestatementScore;

@end
