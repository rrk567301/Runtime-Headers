@class NSMutableSet, NSMutableDictionary;

@interface ICBackgroundTaskScheduler : NSObject

@property (class, readonly, nonatomic) ICBackgroundTaskScheduler *sharedScheduler;

@property (retain, nonatomic) NSMutableDictionary *registeredTasks;
@property (retain, nonatomic) NSMutableSet *scheduledTasks;

- (id)init;
- (void).cxx_destruct;
- (void)registerTask:(id)a0;
- (void)scheduleTask:(Class)a0 completion:(id /* block */)a1;

@end
