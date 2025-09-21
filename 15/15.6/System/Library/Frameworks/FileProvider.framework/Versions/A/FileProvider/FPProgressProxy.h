@class NSURL, NSObservation;

@interface FPProgressProxy : NSProgress {
    id _subscriber;
    NSURL *_fileURL;
    char _shouldStopAccessingURL;
    NSObservation *_totalUnitCountObservation;
    NSObservation *_fractionCompletedObservation;
    char _didSetupParentProgress;
    char _isInSetup;
}

@property (nonatomic) char updateFileCount;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setCancellationHandler:(id /* block */)a0;
- (id)shortDescription;
- (void)_readPausedProgressFromDisk;
- (void)setProgressDidSetupHandler:(id /* block */)a0;
- (void)startTrackingFileURL:(id)a0 kind:(id)a1 allowReadPausedProgressFromDisk:(char)a2;
- (void)stopTrackingIfStarted;
- (void)stopTrackingIfStartedNotSynchronized;
- (void)updateWithProgress:(id)a0;

@end
