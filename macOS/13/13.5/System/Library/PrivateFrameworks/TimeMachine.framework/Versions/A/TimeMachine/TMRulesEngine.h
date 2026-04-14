@class NSArray, NSMutableDictionary;

@interface TMRulesEngine : NSObject <TMRulesEngineProtocol> {
    NSMutableDictionary *_deviceEngineMap;
}

@property BOOL systemFilesExcluded;
@property (copy) NSArray *pathExclusions;
@property (copy) NSArray *standardExclusionPaths;
@property (readonly, copy) NSArray *deviceRulesEngines;
@property (readonly, copy) NSArray *appManagedExclusionPaths;
@property (readonly, copy) NSArray *userManagedExclusionPaths;
@property (readonly, copy) NSArray *mountPointsForIncludedDisks;

+ (id)_rulesEngineUsingBaseRuleSet:(unsigned int)a0 sourceVolumes:(id)a1 cancelBlock:(id /* block */)a2;
+ (id)_standardExclusionPathsForRuleSet:(unsigned int)a0;
+ (id)rulesEngineForCloudBackupOfVolumes:(id)a0 cancelBlock:(id /* block */)a1;
+ (id)rulesEngineForMobileBackupOfVolumes:(id)a0 cancelBlock:(id /* block */)a1;
+ (id)rulesEngineForStandardBackup:(id /* block */)a0;
+ (id)rulesEngineForStandardBackupOfVolumes:(id)a0 cancelBlock:(id /* block */)a1;
+ (id)rulesEngineUsingBOM:(id)a0 cancelBlock:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)addDeviceRulesEngine:(id)a0;
- (id)includedDisks;
- (id)rulesEngineForDevice:(int)a0;

@end
