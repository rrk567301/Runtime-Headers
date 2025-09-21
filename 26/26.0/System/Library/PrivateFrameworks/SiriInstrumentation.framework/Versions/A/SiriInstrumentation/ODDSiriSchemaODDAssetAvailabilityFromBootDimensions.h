@class NSString, NSData, ODDSiriSchemaODDAssistantDimensions;

@interface ODDSiriSchemaODDAssetAvailabilityFromBootDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char buildInstallationTimestampInSecondsSince1970 : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDAssistantDimensions *assistantDimensions;
@property (nonatomic) BOOL hasAssistantDimensions;
@property (copy, nonatomic) NSString *assetSetId;
@property (nonatomic) BOOL hasAssetSetId;
@property (copy, nonatomic) NSString *assetSetName;
@property (nonatomic) BOOL hasAssetSetName;
@property (copy, nonatomic) NSString *previousSystemBuild;
@property (nonatomic) BOOL hasPreviousSystemBuild;
@property (nonatomic) unsigned long long buildInstallationTimestampInSecondsSince1970;
@property (nonatomic) BOOL hasBuildInstallationTimestampInSecondsSince1970;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAssetSetId;
- (void)deleteAssetSetName;
- (void)deleteAssistantDimensions;
- (void)deleteBuildInstallationTimestampInSecondsSince1970;
- (void)deletePreviousSystemBuild;

@end
