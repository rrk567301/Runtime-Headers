@class NSString, NSMutableDictionary;

@interface PLIntensiveResourceTaskManager : NSObject <PLIntensiveResourceTaskDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_pendingTasks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)pendingTasksCount;
- (void)resourceTaskDidFinish:(id)a0;
- (void)resourceTaskWillCancel:(id)a0;
- (id)submitTask:(id)a0 completionHandler:(id /* block */)a1;

@end
