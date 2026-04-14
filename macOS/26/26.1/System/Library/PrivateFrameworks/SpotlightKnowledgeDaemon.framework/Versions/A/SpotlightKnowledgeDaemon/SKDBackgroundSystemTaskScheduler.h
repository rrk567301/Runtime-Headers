@interface SKDBackgroundSystemTaskScheduler : NSObject <SKDBackgroundSystemTaskSchedulerProviding>

- (BOOL)submitTaskRequest:(id)a0 error:(id *)a1;
- (id)init;
- (id)taskRequestForIdentifier:(id)a0;
- (BOOL)registerTaskWithIdentifier:(id)a0 usingQueue:(id)a1 onLaunch:(id /* block */)a2 onExpiration:(id /* block */)a3;

@end
