@class NSData;

@interface PSESchemaPSECall : SISchemaInstrumentationMessage {
    struct { unsigned char callDurationInSeconds : 1; unsigned char hasUserInitiatedFollowup : 1; unsigned char timeToEstablishInSeconds : 1; unsigned char recentCallStatus : 1; unsigned char disconnectedReason : 1; unsigned char contactMatch : 1; unsigned char contactFullNamePhoneticScore : 1; unsigned char contactFirstNamePhoneticScore : 1; unsigned char contactLastNamePhoneticScore : 1; } _has;
}

@property (nonatomic) double callDurationInSeconds;
@property (nonatomic) char hasCallDurationInSeconds;
@property (nonatomic) char hasUserInitiatedFollowup;
@property (nonatomic) char hasHasUserInitiatedFollowup;
@property (nonatomic) double timeToEstablishInSeconds;
@property (nonatomic) char hasTimeToEstablishInSeconds;
@property (nonatomic) int recentCallStatus;
@property (nonatomic) char hasRecentCallStatus;
@property (nonatomic) int disconnectedReason;
@property (nonatomic) char hasDisconnectedReason;
@property (nonatomic) int contactMatch;
@property (nonatomic) char hasContactMatch;
@property (nonatomic) double contactFullNamePhoneticScore;
@property (nonatomic) char hasContactFullNamePhoneticScore;
@property (nonatomic) double contactFirstNamePhoneticScore;
@property (nonatomic) char hasContactFirstNamePhoneticScore;
@property (nonatomic) double contactLastNamePhoneticScore;
@property (nonatomic) char hasContactLastNamePhoneticScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCallDurationInSeconds;
- (void)deleteContactFirstNamePhoneticScore;
- (void)deleteContactFullNamePhoneticScore;
- (void)deleteContactLastNamePhoneticScore;
- (void)deleteContactMatch;
- (void)deleteDisconnectedReason;
- (void)deleteHasUserInitiatedFollowup;
- (void)deleteRecentCallStatus;
- (void)deleteTimeToEstablishInSeconds;
- (id)suppressMessageUnderConditions;

@end
