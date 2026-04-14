@class NSURL, NSObservation;

@interface FPProgressProxy : NSProgress {
    id _subscriber;
    NSURL *_fileURL;
    BOOL _shouldStopAccessingURL;
    NSObservation *_totalUnitCountObservation;
    NSObservation *_fractionCompletedObservation;
    BOOL _didSetupParentProgress;
}

@property (nonatomic) BOOL updateFileCount;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setCancellationHandler:(id /* block */)a0;
- (id)shortDescription;
- (void)stopTrackingIfStarted;
- (void)setProgressDidSetupHandler:(id /* block */)a0;
- (void)startTrackingFileURL:(id)a0 kind:(id)a1;
- (void)updateWithProgress:(id)a0;
- (void)_stopTrackingIfStarted;

@end
