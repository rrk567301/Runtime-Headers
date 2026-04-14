@class NSString;

@interface HMDBackgroundSystemTaskScheduler : NSObject <HMDBackgroundSystemTaskSchedulerInterfacing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)registerForTaskWithIdentifier:(id)a0 usingQueue:(id)a1 launchHandler:(id /* block */)a2;
- (id)taskRequestForIdentifier:(id)a0;
- (BOOL)cancelTaskRequestWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)submitTaskRequest:(id)a0 error:(id *)a1;
- (void)getTaskStatusForIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
