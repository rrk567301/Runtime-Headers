@class NSString, NSData, SISchemaUUID;

@interface SISchemaEngagedAccessoryContext : SISchemaInstrumentationMessage {
    struct { unsigned char homeKitAccessoryType : 1; unsigned char isAudioPlaybackCapable : 1; unsigned char isThirdPartyMusicEnabled : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *accessoryId;
@property (nonatomic) char hasAccessoryId;
@property (nonatomic) int homeKitAccessoryType;
@property (nonatomic) char hasHomeKitAccessoryType;
@property (copy, nonatomic) NSString *accessoryBrand;
@property (nonatomic) char hasAccessoryBrand;
@property (copy, nonatomic) NSString *accessoryModel;
@property (nonatomic) char hasAccessoryModel;
@property (nonatomic) char isAudioPlaybackCapable;
@property (nonatomic) char hasIsAudioPlaybackCapable;
@property (nonatomic) char isThirdPartyMusicEnabled;
@property (nonatomic) char hasIsThirdPartyMusicEnabled;
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
- (void)deleteAccessoryBrand;
- (void)deleteAccessoryId;
- (void)deleteAccessoryModel;
- (void)deleteHomeKitAccessoryType;
- (void)deleteIsAudioPlaybackCapable;
- (void)deleteIsThirdPartyMusicEnabled;
- (id)suppressMessageUnderConditions;

@end
