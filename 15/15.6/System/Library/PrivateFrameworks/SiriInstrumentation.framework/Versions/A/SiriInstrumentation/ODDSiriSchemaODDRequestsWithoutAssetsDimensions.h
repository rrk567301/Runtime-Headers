@class NSString, NSArray, NSData, ODDSiriSchemaODDAssistantDimensions;

@interface ODDSiriSchemaODDRequestsWithoutAssetsDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char buildInstallationTimestampInSecondsSince1970 : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDAssistantDimensions *assistantDimensions;
@property (nonatomic) char hasAssistantDimensions;
@property (copy, nonatomic) NSString *assetSetId;
@property (nonatomic) char hasAssetSetId;
@property (copy, nonatomic) NSString *assetSetName;
@property (nonatomic) char hasAssetSetName;
@property (copy, nonatomic) NSString *previousSystemBuild;
@property (nonatomic) char hasPreviousSystemBuild;
@property (nonatomic) unsigned long long buildInstallationTimestampInSecondsSince1970;
@property (nonatomic) char hasBuildInstallationTimestampInSecondsSince1970;
@property (copy, nonatomic) NSArray *assetFailureReasons;
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
- (void)addAssetFailureReason:(int)a0;
- (int)assetFailureReasonAtIndex:(unsigned long long)a0;
- (unsigned long long)assetFailureReasonCount;
- (void)clearAssetFailureReason;
- (void)deleteAssetFailureReason;
- (void)deleteAssetSetId;
- (void)deleteAssetSetName;
- (void)deleteAssistantDimensions;
- (void)deleteBuildInstallationTimestampInSecondsSince1970;
- (void)deletePreviousSystemBuild;
- (id)suppressMessageUnderConditions;

@end
