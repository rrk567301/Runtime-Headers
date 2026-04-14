@class NSString;

@interface KHUserProjectDBUpgrader : KHDBIncrementalUpgrader {
    NSString *_name;
}

+ (void)writeDataModelVersionInDir:(id)a0;

- (void)dealloc;
- (void)setDatabaseName:(id)a0;
- (void)readVersionNumbers;
- (BOOL)incrementalSchemaUpgrade;
- (void)incrementalDataUpgradeForDatabase:(id)a0;
- (void)writeDataModelVersion;

@end
