@interface AAAgeMigrationFeatureStateProvider : NSObject <AAAgeMigrationStateProviding>

@property (readonly, nonatomic) BOOL ageMigrationFeatureEnabled;

- (id)init;

@end
