@class NSString, UAFSchemaUAFAssetSetStatus, NSArray, NSData, ODDSiriSchemaODDAssistantDimensions;

@interface ODDSiriSchemaODDAssetSetStatusDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char buildInstallationTimestampInSecondsSince1970 : 1; unsigned char assetSetStatusEventTimestampInSecondsSince1970 : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDAssistantDimensions *assistantDimensions;
@property (nonatomic) BOOL hasAssistantDimensions;
@property (copy, nonatomic) NSString *previousSystemBuild;
@property (nonatomic) BOOL hasPreviousSystemBuild;
@property (nonatomic) unsigned long long buildInstallationTimestampInSecondsSince1970;
@property (nonatomic) BOOL hasBuildInstallationTimestampInSecondsSince1970;
@property (retain, nonatomic) UAFSchemaUAFAssetSetStatus *assetSetStatus;
@property (nonatomic) BOOL hasAssetSetStatus;
@property (copy, nonatomic) NSArray *clientProcessAssetAvailabilityStatus;
@property (nonatomic) unsigned long long assetSetStatusEventTimestampInSecondsSince1970;
@property (nonatomic) BOOL hasAssetSetStatusEventTimestampInSecondsSince1970;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addClientProcessAssetAvailabilityStatus:(id)a0;
- (void)clearClientProcessAssetAvailabilityStatus;
- (id)clientProcessAssetAvailabilityStatusAtIndex:(unsigned long long)a0;
- (unsigned long long)clientProcessAssetAvailabilityStatusCount;
- (void)deleteAssetSetStatus;
- (void)deleteAssetSetStatusEventTimestampInSecondsSince1970;
- (void)deleteAssistantDimensions;
- (void)deleteBuildInstallationTimestampInSecondsSince1970;
- (void)deleteClientProcessAssetAvailabilityStatus;
- (void)deletePreviousSystemBuild;
- (id)suppressMessageUnderConditions;

@end
