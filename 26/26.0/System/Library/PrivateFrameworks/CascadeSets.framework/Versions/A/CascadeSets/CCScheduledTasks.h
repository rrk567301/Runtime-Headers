@class NSError;
@protocol CCSetBookkeeping;

@interface CCScheduledTasks : NSObject

@property (nonatomic, readonly) id<CCSetBookkeeping> setBookkeeping;

- (void)register;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSetBookkeeping:(id)a0;
- (void)performNightlyDatabaseMaintenanceWithCompletionHandler:(void (^)(NSError *))a0;

@end
