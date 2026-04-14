@class NSString, NSArray, NSData, ODDSiriSchemaODDAssistantDimensions;

@interface ODDSiriSchemaODDRequestsWithoutAssetsDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char buildInstallationTimestampInSecondsSince1970 : 1; unsigned char durationFromBootToFirstRequestSeconds : 1; unsigned char durationFromSoftwareUpdateToFirstRequestSeconds : 1; unsigned char durationFromClassCUnlockToFirstRequestSeconds : 1; } _has;
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
@property (copy, nonatomic) NSArray *assetFailureReasons;
@property (nonatomic) double durationFromBootToFirstRequestSeconds;
@property (nonatomic) BOOL hasDurationFromBootToFirstRequestSeconds;
@property (nonatomic) double durationFromSoftwareUpdateToFirstRequestSeconds;
@property (nonatomic) BOOL hasDurationFromSoftwareUpdateToFirstRequestSeconds;
@property (nonatomic) double durationFromClassCUnlockToFirstRequestSeconds;
@property (nonatomic) BOOL hasDurationFromClassCUnlockToFirstRequestSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addAssetFailureReason:(int)a0;
- (int)assetFailureReasonAtIndex:(unsigned long long)a0;
- (unsigned long long)assetFailureReasonCount;
- (void)clearAssetFailureReason;
- (void)deleteAssetFailureReason;
- (void)deleteAssetSetId;
- (void)deleteAssetSetName;
- (void)deleteAssistantDimensions;
- (void)deleteBuildInstallationTimestampInSecondsSince1970;
- (void)deleteDurationFromBootToFirstRequestSeconds;
- (void)deleteDurationFromClassCUnlockToFirstRequestSeconds;
- (void)deleteDurationFromSoftwareUpdateToFirstRequestSeconds;
- (void)deletePreviousSystemBuild;

@end
