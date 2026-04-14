@interface IMSpotlightIndexMigrationHelper : NSObject

@property (class, nonatomic, readonly) long long latestIndexVersion;

+ (unsigned long long)logicalMigrationRequirementsFromMergedRequirements:(unsigned long long)a0;
+ (unsigned long long)migrationLaneRequirementForStartingVersion:(long long)a0;
+ (unsigned long long)migrationRequirementForStartingVersion:(long long)a0;
+ (id)migrationRequirementIDsFromRequirements:(unsigned long long)a0;
+ (unsigned long long)migrationRequirementsFromRequirementIDs:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
