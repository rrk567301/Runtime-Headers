@class NSURL, NSObservation;

@interface FPProgressProxy : NSProgress {
    id _subscriber;
    NSURL *_fileURL;
    BOOL _shouldStopAccessingURL;
    NSObservation *_totalUnitCountObservation;
    NSObservation *_fractionCompletedObservation;
    BOOL _didSetupParentProgress;
    BOOL _isInSetup;
}

@property (nonatomic) BOOL updateFileCount;

- (void)setCancellationHandler:(id /* block */)a0;
- (void)dealloc;
- (id)shortDescription;
- (void).cxx_destruct;
- (void)_readPausedProgressFromDisk;
- (void)setProgressDidSetupHandler:(id /* block */)a0;
- (void)startTrackingFileURL:(id)a0 kind:(id)a1 allowReadPausedProgressFromDisk:(BOOL)a2;
- (void)stopTrackingIfStarted;
- (void)stopTrackingIfStartedNotSynchronized;
- (void)updateWithProgress:(id)a0;

@end
