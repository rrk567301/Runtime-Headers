@interface SKDBackgroundSystemTaskScheduler : NSObject <SKDBackgroundSystemTaskSchedulerProviding>

@property (nonatomic, readonly) double minimumSubmissionInterval;

- (id)init;
- (BOOL)submitTaskRequest:(id)a0 error:(id *)a1;
- (BOOL)deregisterTaskWithIdentifier:(id)a0;
- (id)taskRequestForIdentifier:(id)a0;
- (BOOL)cancelTaskRequestForIdentifier:(id)a0 error:(id *)a1;
- (BOOL)registerTaskWithIdentifier:(id)a0 usingQueue:(id)a1 onLaunch:(id /* block */)a2 onExpiration:(id /* block */)a3;

@end
