@class ANCSchemaANCBackgroundContent, ANCSchemaANCAudioDevice, SISchemaUUID, ANCSchemaANCAppNotificationMetadata, NSData;

@interface ANCSchemaANCNotificationReceived : SISchemaInstrumentationMessage {
    struct { unsigned char announcementCategory : 1; unsigned char targetPlatform : 1; unsigned char isTimeSensitiveAnnouncement : 1; unsigned char appCategory : 1; } _has;
}

@property (nonatomic) int announcementCategory;
@property (nonatomic) BOOL hasAnnouncementCategory;
@property (nonatomic) int targetPlatform;
@property (nonatomic) BOOL hasTargetPlatform;
@property (retain, nonatomic) ANCSchemaANCAudioDevice *connectedAudioDevice;
@property (nonatomic) BOOL hasConnectedAudioDevice;
@property (nonatomic) BOOL isTimeSensitiveAnnouncement;
@property (nonatomic) BOOL hasIsTimeSensitiveAnnouncement;
@property (nonatomic) int appCategory;
@property (nonatomic) BOOL hasAppCategory;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (retain, nonatomic) ANCSchemaANCBackgroundContent *backgroundContent;
@property (nonatomic) BOOL hasBackgroundContent;
@property (retain, nonatomic) ANCSchemaANCAppNotificationMetadata *notificationMetadata;
@property (nonatomic) BOOL hasNotificationMetadata;
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
- (void)deleteAnnouncementCategory;
- (void)deleteTargetPlatform;
- (void)deleteConnectedAudioDevice;
- (void)deleteIsTimeSensitiveAnnouncement;
- (void)deleteAppCategory;
- (void)deleteLinkId;
- (void)deleteBackgroundContent;
- (void)deleteNotificationMetadata;

@end
