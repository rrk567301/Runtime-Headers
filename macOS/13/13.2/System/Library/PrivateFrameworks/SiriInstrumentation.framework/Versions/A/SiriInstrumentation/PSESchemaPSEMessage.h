@class NSData;

@interface PSESchemaPSEMessage : SISchemaInstrumentationMessage {
    struct { unsigned char hasUserInitiatedFollowup : 1; unsigned char userFollowupEventDonationTimeInSecondsSince2001 : 1; unsigned char messageUserFollowupAction : 1; unsigned char contactMatch : 1; } _has;
}

@property (nonatomic) BOOL hasUserInitiatedFollowup;
@property (nonatomic) BOOL hasHasUserInitiatedFollowup;
@property (nonatomic) double userFollowupEventDonationTimeInSecondsSince2001;
@property (nonatomic) BOOL hasUserFollowupEventDonationTimeInSecondsSince2001;
@property (nonatomic) int messageUserFollowupAction;
@property (nonatomic) BOOL hasMessageUserFollowupAction;
@property (nonatomic) int contactMatch;
@property (nonatomic) BOOL hasContactMatch;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteHasUserInitiatedFollowup;
- (void)deleteUserFollowupEventDonationTimeInSecondsSince2001;
- (void)deleteMessageUserFollowupAction;
- (void)deleteContactMatch;

@end
