@class MKLinkPreviewMetadata;

@interface MKLinkPreviewSnapshotRequest : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    char _loading;
    char _cancelled;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) MKLinkPreviewMetadata *metadata;
@property (readonly, nonatomic, getter=isCancelled) char cancelled;
@property (readonly, nonatomic, getter=isLoading) char loading;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)_failWithError:(id)a0;
- (void)_annotatedSnapshotImageWithMetadata:(id)a0 isLightMode:(char)a1 completionHandler:(id /* block */)a2;
- (void)_handleDirectionsAction;
- (void)_handleGuidesAction;
- (void)_handleLookAroundAction;
- (void)_handleMapSnapshotAction;
- (void)_handleReportAProblemAction;
- (void)getSnapshotWithCompletionHandler:(id /* block */)a0;
- (id)initWithMetadata:(id)a0;

@end
