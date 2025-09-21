@class ANCSchemaANCBackgroundContent, ANCSchemaANCAudioDevice, SISchemaUUID, ANCSchemaANCAppNotificationMetadata, NSData;

@interface ANCSchemaANCNotificationReceived : SISchemaInstrumentationMessage {
    struct { unsigned char announcementCategory : 1; unsigned char targetPlatform : 1; unsigned char isTimeSensitiveAnnouncement : 1; unsigned char appCategory : 1; unsigned char bobbleEnabled : 1; unsigned char bobbleSupported : 1; } _has;
}

@property (nonatomic) int announcementCategory;
@property (nonatomic) char hasAnnouncementCategory;
@property (nonatomic) int targetPlatform;
@property (nonatomic) char hasTargetPlatform;
@property (retain, nonatomic) ANCSchemaANCAudioDevice *connectedAudioDevice;
@property (nonatomic) char hasConnectedAudioDevice;
@property (nonatomic) char isTimeSensitiveAnnouncement;
@property (nonatomic) char hasIsTimeSensitiveAnnouncement;
@property (nonatomic) int appCategory;
@property (nonatomic) char hasAppCategory;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (retain, nonatomic) ANCSchemaANCBackgroundContent *backgroundContent;
@property (nonatomic) char hasBackgroundContent;
@property (retain, nonatomic) ANCSchemaANCAppNotificationMetadata *notificationMetadata;
@property (nonatomic) char hasNotificationMetadata;
@property (nonatomic) int bobbleEnabled;
@property (nonatomic) char hasBobbleEnabled;
@property (nonatomic) int bobbleSupported;
@property (nonatomic) char hasBobbleSupported;
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
- (void)deleteAnnouncementCategory;
- (void)deleteAppCategory;
- (void)deleteBackgroundContent;
- (void)deleteBobbleEnabled;
- (void)deleteBobbleSupported;
- (void)deleteConnectedAudioDevice;
- (void)deleteIsTimeSensitiveAnnouncement;
- (void)deleteLinkId;
- (void)deleteNotificationMetadata;
- (void)deleteTargetPlatform;
- (id)suppressMessageUnderConditions;

@end
