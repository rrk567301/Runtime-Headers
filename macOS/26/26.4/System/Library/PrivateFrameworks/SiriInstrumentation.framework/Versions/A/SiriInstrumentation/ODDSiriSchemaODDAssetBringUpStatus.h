@class NSString, NSData;

@interface ODDSiriSchemaODDAssetBringUpStatus : SISchemaInstrumentationMessage {
    struct { unsigned char assetBringUpState : 1; unsigned char assetBringUpType : 1; unsigned char assetBringUpErrorCode : 1; unsigned char countOfPSUSAssetsPromotedInCurrentOS : 1; unsigned char timeInSecondsSinceSoftwareUpdate : 1; unsigned char uafAssetSource : 1; unsigned char countOfAssetsInAssetSet : 1; unsigned char totalSizeOfAssetsInAssetSet : 1; } _has;
}

@property (nonatomic) BOOL assetBringUpState;
@property (nonatomic) BOOL hasAssetBringUpState;
@property (nonatomic) int assetBringUpType;
@property (nonatomic) BOOL hasAssetBringUpType;
@property (copy, nonatomic) NSString *assetSetIdentifier;
@property (nonatomic) BOOL hasAssetSetIdentifier;
@property (copy, nonatomic) NSString *assetSetName;
@property (nonatomic) BOOL hasAssetSetName;
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
@property (nonatomic) int uafAssetSource;
@property (nonatomic) BOOL hasUafAssetSource;
@property (nonatomic) unsigned int countOfAssetsInAssetSet;
@property (nonatomic) BOOL hasCountOfAssetsInAssetSet;
@property (nonatomic) unsigned long long totalSizeOfAssetsInAssetSet;
@property (nonatomic) BOOL hasTotalSizeOfAssetsInAssetSet;
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
- (void)deleteAssetBringUpErrorCode;
- (void)deleteAssetBringUpErrorDescription;
- (void)deleteAssetBringUpErrorDomain;
- (void)deleteAssetBringUpState;
- (void)deleteAssetBringUpType;
- (void)deleteAssetSetIdentifier;
- (void)deleteAssetSetName;
- (void)deleteCountOfAssetsInAssetSet;
- (void)deleteCountOfPSUSAssetsPromotedInCurrentOS;
- (void)deletePreviousBuildVersion;
- (void)deleteTimeInSecondsSinceSoftwareUpdate;
- (void)deleteTotalSizeOfAssetsInAssetSet;
- (void)deleteUafAssetSource;

@end
