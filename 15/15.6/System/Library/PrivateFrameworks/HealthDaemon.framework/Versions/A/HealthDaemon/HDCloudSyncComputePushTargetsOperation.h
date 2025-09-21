@class NSString, HDSynchronousTaskGroup, HDSyncIdentity;

@interface HDCloudSyncComputePushTargetsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    HDSynchronousTaskGroup *_taskGroup;
    HDSyncIdentity *_currentSyncIdentity;
    char _hasUpgradedToSyncIdentity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)finishedOperationTags;
+ (char)shouldLogAtOperationEnd;
+ (char)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (void)main;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(char)a1 errors:(id)a2;

@end
