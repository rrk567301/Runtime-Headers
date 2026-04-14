@class NSData, SISchemaUUID;

@interface MTSchemaMTInvocationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char isOnDeviceTranslation : 1; unsigned char mobileAssetConfigVersion : 1; unsigned char task : 1; unsigned char inputSource : 1; unsigned char isExplicitLanguageFilterEnabled : 1; unsigned char isLanguageIdentificationEnabled : 1; unsigned char displayMode : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) BOOL isOnDeviceTranslation;
@property (nonatomic) BOOL hasIsOnDeviceTranslation;
@property (nonatomic) unsigned int mobileAssetConfigVersion;
@property (nonatomic) BOOL hasMobileAssetConfigVersion;
@property (nonatomic) int task;
@property (nonatomic) BOOL hasTask;
@property (nonatomic) int inputSource;
@property (nonatomic) BOOL hasInputSource;
@property (nonatomic) BOOL isExplicitLanguageFilterEnabled;
@property (nonatomic) BOOL hasIsExplicitLanguageFilterEnabled;
@property (nonatomic) BOOL isLanguageIdentificationEnabled;
@property (nonatomic) BOOL hasIsLanguageIdentificationEnabled;
@property (nonatomic) int displayMode;
@property (nonatomic) BOOL hasDisplayMode;
@property (retain, nonatomic) SISchemaUUID *qssSessionId;
@property (nonatomic) BOOL hasQssSessionId;
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
- (void)deleteLinkId;
- (void)deleteTask;
- (void)deleteMobileAssetConfigVersion;
- (void)deleteIsOnDeviceTranslation;
- (void)deleteInputSource;
- (void)deleteIsExplicitLanguageFilterEnabled;
- (void)deleteIsLanguageIdentificationEnabled;
- (void)deleteDisplayMode;
- (void)deleteQssSessionId;

@end
