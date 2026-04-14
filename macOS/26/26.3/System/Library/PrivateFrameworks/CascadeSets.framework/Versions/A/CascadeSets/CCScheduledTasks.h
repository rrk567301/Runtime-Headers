@class NSError;
@protocol CCSetBookkeeping;

@interface CCScheduledTasks : NSObject

@property (nonatomic, readonly) id<CCSetBookkeeping> setBookkeeping;

- (id)init;
- (void).cxx_destruct;
- (void)register;
- (id)initWithSetBookkeeping:(id)a0;
- (void)performNightlyDatabaseMaintenanceWithCompletionHandler:(void (^)(NSError *))a0;

@end
