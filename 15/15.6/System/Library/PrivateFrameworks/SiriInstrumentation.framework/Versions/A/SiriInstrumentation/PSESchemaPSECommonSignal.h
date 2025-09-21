@class NSString, NSData;

@interface PSESchemaPSECommonSignal : SISchemaInstrumentationMessage {
    struct { unsigned char eventDonationTimeInSecondsSince2001 : 1; unsigned char isDonatedBySiri : 1; unsigned char hasUserInitiatedFollowup : 1; unsigned char appFollowup : 1; unsigned char appLaunchTimeInSecondsSince2001 : 1; unsigned char appLaunchReason : 1; } _has;
}

@property (nonatomic) double eventDonationTimeInSecondsSince2001;
@property (nonatomic) char hasEventDonationTimeInSecondsSince2001;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) char hasDomain;
@property (copy, nonatomic) NSString *action;
@property (nonatomic) char hasAction;
@property (nonatomic) int isDonatedBySiri;
@property (nonatomic) char hasIsDonatedBySiri;
@property (nonatomic) char hasUserInitiatedFollowup;
@property (nonatomic) char hasHasUserInitiatedFollowup;
@property (nonatomic) int appFollowup;
@property (nonatomic) char hasAppFollowup;
@property (nonatomic) double appLaunchTimeInSecondsSince2001;
@property (nonatomic) char hasAppLaunchTimeInSecondsSince2001;
@property (nonatomic) int appLaunchReason;
@property (nonatomic) char hasAppLaunchReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAction;
- (void)deleteAppFollowup;
- (void)deleteAppLaunchReason;
- (void)deleteAppLaunchTimeInSecondsSince2001;
- (void)deleteDomain;
- (void)deleteEventDonationTimeInSecondsSince2001;
- (void)deleteHasUserInitiatedFollowup;
- (void)deleteIsDonatedBySiri;
- (id)suppressMessageUnderConditions;

@end
