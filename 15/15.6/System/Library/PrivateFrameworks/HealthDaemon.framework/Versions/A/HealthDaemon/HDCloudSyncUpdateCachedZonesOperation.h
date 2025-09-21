@class HDSynchronousTaskGroup, NSString;

@interface HDCloudSyncUpdateCachedZonesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate>

@property (readonly, nonatomic) HDSynchronousTaskGroup *taskGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (void)main;
- (void)fetchChangesForContainer:(id)a0 database:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(char)a1 errors:(id)a2;

@end
