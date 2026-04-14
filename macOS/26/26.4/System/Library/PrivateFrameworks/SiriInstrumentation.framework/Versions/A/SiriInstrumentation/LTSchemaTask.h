@class NSString, NSData;

@interface LTSchemaTask : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *translationTask;
@property (nonatomic) BOOL hasTranslationTask;
@property (copy, nonatomic) NSString *sourceLanguage;
@property (nonatomic) BOOL hasSourceLanguage;
@property (copy, nonatomic) NSString *targetLanguage;
@property (nonatomic) BOOL hasTargetLanguage;
@property (copy, nonatomic) NSString *deviceOS;
@property (nonatomic) BOOL hasDeviceOS;
@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) BOOL hasDeviceType;
@property (copy, nonatomic) NSString *osVersion;
@property (nonatomic) BOOL hasOsVersion;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL hasBundleIdentifier;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteOsVersion;
- (void)deleteBundleIdentifier;
- (void)deleteDeviceOS;
- (void)deleteDeviceType;
- (void)deleteSourceLanguage;
- (void)deleteTargetLanguage;
- (void)deleteTranslationTask;

@end
