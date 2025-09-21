@class NSData;

@interface ODDSiriSchemaODDAnnounceProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAnnounceCallsEnabled : 1; unsigned char isAnnounceNotificationsEnabled : 1; unsigned char isProximityCardSeen : 1; unsigned char isReplyWithoutConfirmationEnabled : 1; unsigned char isEnabledForHeadphones : 1; unsigned char isSpokenNotificationsControlCenterModuleEnabled : 1; unsigned char isCarPlayMuted : 1; unsigned char carPlayStatus : 1; } _has;
}

@property (nonatomic) char isAnnounceCallsEnabled;
@property (nonatomic) char hasIsAnnounceCallsEnabled;
@property (nonatomic) char isAnnounceNotificationsEnabled;
@property (nonatomic) char hasIsAnnounceNotificationsEnabled;
@property (nonatomic) char isProximityCardSeen;
@property (nonatomic) char hasIsProximityCardSeen;
@property (nonatomic) char isReplyWithoutConfirmationEnabled;
@property (nonatomic) char hasIsReplyWithoutConfirmationEnabled;
@property (nonatomic) char isEnabledForHeadphones;
@property (nonatomic) char hasIsEnabledForHeadphones;
@property (nonatomic) char isSpokenNotificationsControlCenterModuleEnabled;
@property (nonatomic) char hasIsSpokenNotificationsControlCenterModuleEnabled;
@property (nonatomic) char isCarPlayMuted;
@property (nonatomic) char hasIsCarPlayMuted;
@property (nonatomic) int carPlayStatus;
@property (nonatomic) char hasCarPlayStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCarPlayStatus;
- (void)deleteIsAnnounceCallsEnabled;
- (void)deleteIsAnnounceNotificationsEnabled;
- (void)deleteIsCarPlayMuted;
- (void)deleteIsEnabledForHeadphones;
- (void)deleteIsProximityCardSeen;
- (void)deleteIsReplyWithoutConfirmationEnabled;
- (void)deleteIsSpokenNotificationsControlCenterModuleEnabled;
- (id)suppressMessageUnderConditions;

@end
