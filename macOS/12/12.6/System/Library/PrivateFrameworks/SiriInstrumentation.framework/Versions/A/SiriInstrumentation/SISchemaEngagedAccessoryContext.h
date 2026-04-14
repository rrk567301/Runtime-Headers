@class NSString, NSData, SISchemaUUID;

@interface SISchemaEngagedAccessoryContext : SISchemaInstrumentationMessage {
    struct { unsigned char homeKitAccessoryType : 1; unsigned char isAudioPlaybackCapable : 1; unsigned char isThirdPartyMusicEnabled : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *accessoryId;
@property (nonatomic) BOOL hasAccessoryId;
@property (nonatomic) int homeKitAccessoryType;
@property (nonatomic) BOOL hasHomeKitAccessoryType;
@property (copy, nonatomic) NSString *accessoryBrand;
@property (nonatomic) BOOL hasAccessoryBrand;
@property (copy, nonatomic) NSString *accessoryModel;
@property (nonatomic) BOOL hasAccessoryModel;
@property (nonatomic) BOOL isAudioPlaybackCapable;
@property (nonatomic) BOOL hasIsAudioPlaybackCapable;
@property (nonatomic) BOOL isThirdPartyMusicEnabled;
@property (nonatomic) BOOL hasIsThirdPartyMusicEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAccessoryId;
- (void)deleteHomeKitAccessoryType;
- (void)deleteAccessoryBrand;
- (void)deleteAccessoryModel;
- (void)deleteIsAudioPlaybackCapable;
- (void)deleteIsThirdPartyMusicEnabled;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
