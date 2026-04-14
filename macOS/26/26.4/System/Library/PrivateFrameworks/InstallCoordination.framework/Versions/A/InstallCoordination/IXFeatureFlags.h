@interface IXFeatureFlags : NSObject

@property (class, readonly, nonatomic) BOOL scheduledUpdatesEnabled;
@property (class, readonly, nonatomic) BOOL osAppMigrationEnabled;

@end
