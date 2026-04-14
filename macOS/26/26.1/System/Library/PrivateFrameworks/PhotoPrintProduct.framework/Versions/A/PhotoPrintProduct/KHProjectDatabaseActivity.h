@class KHProjectBundle, KHProjectBundleDatabaseActivityRecord;

@interface KHProjectDatabaseActivity : NSObject

@property (readonly) KHProjectBundleDatabaseActivityRecord *record;
@property (retain) KHProjectBundle *managingProjectBundle;
@property unsigned long long flags;

- (id)initWithRecord:(id)a0;
- (void)endActivity;
- (id)identifier;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;

@end
