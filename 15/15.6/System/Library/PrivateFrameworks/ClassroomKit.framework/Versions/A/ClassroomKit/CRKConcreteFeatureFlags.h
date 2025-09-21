@interface CRKConcreteFeatureFlags : NSObject <CRKFeatureFlags>

@property (readonly, nonatomic, getter=isDataSeparationEnabled) char dataSeparationEnabled;
@property (readonly, nonatomic, getter=isASMUserCachingEnabled) char ASMUserCachingEnabled;
@property (readonly, nonatomic, getter=isSettingsEnhancedSearchEnabled) char settingsEnhancedSearch;
@property (readonly, nonatomic, getter=isZeroKeywordSearchEnabled) char ZeroKeywordSearchEnabled;
@property (readonly, nonatomic, getter=areAppGroupsEnabled) char appGroupsEnabled;

@end
