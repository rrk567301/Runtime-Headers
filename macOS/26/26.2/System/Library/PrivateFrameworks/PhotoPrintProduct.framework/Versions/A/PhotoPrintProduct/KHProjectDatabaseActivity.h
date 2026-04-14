@class KHProjectBundle, KHProjectBundleDatabaseActivityRecord;

@interface KHProjectDatabaseActivity : NSObject

@property (readonly) KHProjectBundleDatabaseActivityRecord *record;
@property (retain) KHProjectBundle *managingProjectBundle;
@property unsigned long long flags;

- (id)initWithRecord:(id)a0;
- (id)identifier;
- (void).cxx_destruct;
- (id)description;
- (void)endActivity;
- (void)dealloc;

@end
