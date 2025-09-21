@class NSData;

@interface SISchemaAnnounceCarPlayGlyphSettingToggled : SISchemaInstrumentationMessage {
    struct { unsigned char announcementsMuted : 1; } _has;
}

@property (nonatomic) char announcementsMuted;
@property (nonatomic) char hasAnnouncementsMuted;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAnnouncementsMuted;
- (id)suppressMessageUnderConditions;

@end
