@class NSData;

@interface PSESchemaPSEMessage : SISchemaInstrumentationMessage {
    struct { unsigned char hasUserInitiatedFollowup : 1; unsigned char userFollowupEventDonationTimeInSecondsSince2001 : 1; unsigned char messageUserFollowupAction : 1; unsigned char contactMatch : 1; unsigned char contactFullNamePhoneticScore : 1; unsigned char contactFirstNamePhoneticScore : 1; unsigned char contactLastNamePhoneticScore : 1; } _has;
}

@property (nonatomic) char hasUserInitiatedFollowup;
@property (nonatomic) char hasHasUserInitiatedFollowup;
@property (nonatomic) double userFollowupEventDonationTimeInSecondsSince2001;
@property (nonatomic) char hasUserFollowupEventDonationTimeInSecondsSince2001;
@property (nonatomic) int messageUserFollowupAction;
@property (nonatomic) char hasMessageUserFollowupAction;
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
- (void)deleteMessageUserFollowupAction;
- (void)deleteContactFirstNamePhoneticScore;
- (void)deleteContactFullNamePhoneticScore;
- (void)deleteContactLastNamePhoneticScore;
- (void)deleteContactMatch;
- (void)deleteHasUserInitiatedFollowup;
- (void)deleteUserFollowupEventDonationTimeInSecondsSince2001;
- (id)suppressMessageUnderConditions;

@end
