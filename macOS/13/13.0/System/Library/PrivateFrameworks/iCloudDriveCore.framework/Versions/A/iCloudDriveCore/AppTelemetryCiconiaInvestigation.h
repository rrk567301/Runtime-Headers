@class NSString;

@interface AppTelemetryCiconiaInvestigation : PBCodable <NSCopying> {
    struct { unsigned char accountQuotaUsage : 1; unsigned char bouncedItemsCount : 1; unsigned char bouncedItemsMatrix : 1; unsigned char ciconiaVersion : 1; unsigned char cloningTime : 1; unsigned char diskSpaceLeft : 1; unsigned char expectedMigratedItemsCount : 1; unsigned char ignoredContentProtectedItems : 1; unsigned char importTime : 1; unsigned char itemsChangedDuringCloning : 1; unsigned char itemsNotFoundInDB : 1; unsigned char itemsNotMigratedCount : 1; unsigned char materialisedOnCDItemsCount : 1; unsigned char materialisedOnFPFSItemsCount : 1; unsigned char packagesWithoutBundleBit : 1; unsigned char previousAttempts : 1; unsigned char previousFailedAttempts : 1; unsigned char totalItemCount : 1; unsigned char unexpectedCreations : 1; unsigned char previousReleasesSuccessRate : 1; unsigned char typesOfMigratedItemsMask : 1; unsigned char typesOfNonMigratedItemsMask : 1; unsigned char areMigratedFaultsBelowThreshold : 1; unsigned char areNonFaultAllMigrated : 1; unsigned char isAccountDataSeparated : 1; unsigned char manuallyTriggeredMigration : 1; } _has;
}

@property (nonatomic) BOOL hasPreviousAttempts;
@property (nonatomic) long long previousAttempts;
@property (nonatomic) BOOL hasPreviousFailedAttempts;
@property (nonatomic) long long previousFailedAttempts;
@property (nonatomic) BOOL hasAreMigratedFaultsBelowThreshold;
@property (nonatomic) BOOL areMigratedFaultsBelowThreshold;
@property (nonatomic) BOOL hasAreNonFaultAllMigrated;
@property (nonatomic) BOOL areNonFaultAllMigrated;
@property (nonatomic) BOOL hasTypesOfMigratedItemsMask;
@property (nonatomic) int typesOfMigratedItemsMask;
@property (nonatomic) BOOL hasExpectedMigratedItemsCount;
@property (nonatomic) long long expectedMigratedItemsCount;
@property (nonatomic) BOOL hasItemsNotMigratedCount;
@property (nonatomic) long long itemsNotMigratedCount;
@property (nonatomic) BOOL hasTypesOfNonMigratedItemsMask;
@property (nonatomic) int typesOfNonMigratedItemsMask;
@property (nonatomic) BOOL hasMaterialisedOnCDItemsCount;
@property (nonatomic) long long materialisedOnCDItemsCount;
@property (nonatomic) BOOL hasMaterialisedOnFPFSItemsCount;
@property (nonatomic) long long materialisedOnFPFSItemsCount;
@property (nonatomic) BOOL hasDiskSpaceLeft;
@property (nonatomic) long long diskSpaceLeft;
@property (nonatomic) BOOL hasAccountQuotaUsage;
@property (nonatomic) long long accountQuotaUsage;
@property (nonatomic) BOOL hasIsAccountDataSeparated;
@property (nonatomic) BOOL isAccountDataSeparated;
@property (nonatomic) BOOL hasCiconiaVersion;
@property (nonatomic) long long ciconiaVersion;
@property (nonatomic) BOOL hasPreviousReleasesSuccessRate;
@property (nonatomic) float previousReleasesSuccessRate;
@property (nonatomic) BOOL hasCloningTime;
@property (nonatomic) double cloningTime;
@property (nonatomic) BOOL hasImportTime;
@property (nonatomic) double importTime;
@property (nonatomic) BOOL hasManuallyTriggeredMigration;
@property (nonatomic) BOOL manuallyTriggeredMigration;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasItemsNotFoundInDB;
@property (nonatomic) long long itemsNotFoundInDB;
@property (nonatomic) BOOL hasItemsChangedDuringCloning;
@property (nonatomic) long long itemsChangedDuringCloning;
@property (nonatomic) BOOL hasUnexpectedCreations;
@property (nonatomic) long long unexpectedCreations;
@property (nonatomic) BOOL hasIgnoredContentProtectedItems;
@property (nonatomic) long long ignoredContentProtectedItems;
@property (nonatomic) BOOL hasPackagesWithoutBundleBit;
@property (nonatomic) long long packagesWithoutBundleBit;
@property (nonatomic) BOOL hasTotalItemCount;
@property (nonatomic) long long totalItemCount;
@property (readonly, nonatomic) BOOL hasRampId;
@property (retain, nonatomic) NSString *rampId;
@property (nonatomic) BOOL hasBouncedItemsCount;
@property (nonatomic) long long bouncedItemsCount;
@property (nonatomic) BOOL hasBouncedItemsMatrix;
@property (nonatomic) long long bouncedItemsMatrix;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
