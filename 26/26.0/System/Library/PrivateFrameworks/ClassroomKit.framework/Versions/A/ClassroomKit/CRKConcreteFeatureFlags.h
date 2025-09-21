@interface CRKConcreteFeatureFlags : NSObject <CRKFeatureFlags>

@property (readonly, nonatomic, getter=isDataSeparationEnabled) BOOL dataSeparationEnabled;
@property (readonly, nonatomic, getter=isASMUserCachingEnabled) BOOL ASMUserCachingEnabled;
@property (readonly, nonatomic, getter=areAppGroupsEnabled) BOOL appGroupsEnabled;

@end
