@class NSString, NSArray, SignpostSupportSubsystemCategoryAllowlist;

@interface WRWorkflow : NSObject

@property (readonly) NSString *name;
@property (readonly) NSArray *startSignposts;
@property (readonly) NSArray *endSignpostGroups;
@property (readonly) NSArray *allSignposts;
@property (readonly) double overallDiagnosticThresholdIntervalSeconds;
@property (readonly) BOOL hasOverallDiagnosticThresholdInterval;
@property (readonly) SignpostSupportSubsystemCategoryAllowlist *allowList;

+ (id)workflowWithName:(id)a0;
+ (id)allWorkflows;

- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlist:(id)a0 telemetryEnabled:(BOOL)a1 diagnosticsEnabled:(BOOL)a2;

@end
