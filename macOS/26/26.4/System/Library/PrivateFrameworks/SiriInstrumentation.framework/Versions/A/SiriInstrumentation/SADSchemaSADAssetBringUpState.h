@class NSString, NSData;

@interface SADSchemaSADAssetBringUpState : SISchemaInstrumentationMessage {
    struct { unsigned char assetBringUpState : 1; unsigned char assetBringUpType : 1; unsigned char assetBringUpErrorCode : 1; unsigned char countOfPSUSAssetsPromotedInCurrentOS : 1; unsigned char timeInSecondsSinceSoftwareUpdate : 1; unsigned char countOfAssetsInAssetSet : 1; unsigned char totalSizeOfAssetsInAssetSet : 1; unsigned char countOfFactoryAssetsInAssetSet : 1; unsigned char totalSizeOfFactoryAssetsInAssetSet : 1; unsigned char countOfOTAAssetsInAssetSet : 1; unsigned char totalSizeOfOTAAssetsInAssetSet : 1; unsigned char countOfPSUSAssetsInAssetSet : 1; unsigned char totalSizeOfPSUSAssetsInAssetSet : 1; } _has;
}

@property (nonatomic) BOOL assetBringUpState;
@property (nonatomic) BOOL hasAssetBringUpState;
@property (nonatomic) int assetBringUpType;
@property (nonatomic) BOOL hasAssetBringUpType;
@property (copy, nonatomic) NSString *assetSetIdentifier;
@property (nonatomic) BOOL hasAssetSetIdentifier;
@property (copy, nonatomic) NSString *assetType;
@property (nonatomic) BOOL hasAssetType;
@property (copy, nonatomic) NSString *currentBuildVersion;
@property (nonatomic) BOOL hasCurrentBuildVersion;
@property (copy, nonatomic) NSString *previousBuildVersion;
@property (nonatomic) BOOL hasPreviousBuildVersion;
@property (copy, nonatomic) NSString *assetBringUpErrorDomain;
@property (nonatomic) BOOL hasAssetBringUpErrorDomain;
@property (copy, nonatomic) NSString *assetBringUpErrorDescription;
@property (nonatomic) BOOL hasAssetBringUpErrorDescription;
@property (nonatomic) unsigned int assetBringUpErrorCode;
@property (nonatomic) BOOL hasAssetBringUpErrorCode;
@property (nonatomic) unsigned int countOfPSUSAssetsPromotedInCurrentOS;
@property (nonatomic) BOOL hasCountOfPSUSAssetsPromotedInCurrentOS;
@property (nonatomic) unsigned long long timeInSecondsSinceSoftwareUpdate;
@property (nonatomic) BOOL hasTimeInSecondsSinceSoftwareUpdate;
@property (nonatomic) unsigned int countOfAssetsInAssetSet;
@property (nonatomic) BOOL hasCountOfAssetsInAssetSet;
@property (nonatomic) unsigned long long totalSizeOfAssetsInAssetSet;
@property (nonatomic) BOOL hasTotalSizeOfAssetsInAssetSet;
@property (nonatomic) unsigned int countOfFactoryAssetsInAssetSet;
@property (nonatomic) BOOL hasCountOfFactoryAssetsInAssetSet;
@property (nonatomic) unsigned long long totalSizeOfFactoryAssetsInAssetSet;
@property (nonatomic) BOOL hasTotalSizeOfFactoryAssetsInAssetSet;
@property (nonatomic) unsigned int countOfOTAAssetsInAssetSet;
@property (nonatomic) BOOL hasCountOfOTAAssetsInAssetSet;
@property (nonatomic) unsigned long long totalSizeOfOTAAssetsInAssetSet;
@property (nonatomic) BOOL hasTotalSizeOfOTAAssetsInAssetSet;
@property (nonatomic) unsigned int countOfPSUSAssetsInAssetSet;
@property (nonatomic) BOOL hasCountOfPSUSAssetsInAssetSet;
@property (nonatomic) unsigned long long totalSizeOfPSUSAssetsInAssetSet;
@property (nonatomic) BOOL hasTotalSizeOfPSUSAssetsInAssetSet;
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
- (void)deleteAssetType;
- (void)deleteAssetBringUpErrorCode;
- (void)deleteAssetBringUpErrorDescription;
- (void)deleteAssetBringUpErrorDomain;
- (void)deleteAssetBringUpState;
- (void)deleteAssetBringUpType;
- (void)deleteAssetSetIdentifier;
- (void)deleteCountOfAssetsInAssetSet;
- (void)deleteCountOfFactoryAssetsInAssetSet;
- (void)deleteCountOfOTAAssetsInAssetSet;
- (void)deleteCountOfPSUSAssetsInAssetSet;
- (void)deleteCountOfPSUSAssetsPromotedInCurrentOS;
- (void)deleteCurrentBuildVersion;
- (void)deletePreviousBuildVersion;
- (void)deleteTimeInSecondsSinceSoftwareUpdate;
- (void)deleteTotalSizeOfAssetsInAssetSet;
- (void)deleteTotalSizeOfFactoryAssetsInAssetSet;
- (void)deleteTotalSizeOfOTAAssetsInAssetSet;
- (void)deleteTotalSizeOfPSUSAssetsInAssetSet;

@end
