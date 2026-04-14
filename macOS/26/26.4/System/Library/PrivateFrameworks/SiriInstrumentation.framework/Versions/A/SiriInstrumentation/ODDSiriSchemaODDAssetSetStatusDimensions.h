@class NSString, UAFSchemaUAFAssetSetStatus, NSArray, NSData, ODDSiriSchemaODDAssistantDimensions;

@interface ODDSiriSchemaODDAssetSetStatusDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char buildInstallationTimestampInSecondsSince1970 : 1; unsigned char assetSetStatusEventTimestampInSecondsSince1970 : 1; unsigned char statusReason : 1; } _has;
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
@property (nonatomic) int statusReason;
@property (nonatomic) BOOL hasStatusReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
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
- (void)deleteStatusReason;

@end
