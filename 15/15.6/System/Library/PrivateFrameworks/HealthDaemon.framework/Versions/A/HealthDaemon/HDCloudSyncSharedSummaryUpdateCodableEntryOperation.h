@class NSString, NSArray, HDSynchronousTaskGroup;

@interface HDCloudSyncSharedSummaryUpdateCodableEntryOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSArray *_updatedLocalEntries;
    HDSynchronousTaskGroup *_taskGroup;
    char _isActive;
    char _shouldResolve;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (id)_filterEntries:(id)a0 active:(char)a1;
- (id)initWithConfiguration:(id)a0 updatedLocalEntries:(id)a1 isActive:(char)a2 shouldResolveCNContact:(char)a3;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(char)a1 errors:(id)a2;

@end
