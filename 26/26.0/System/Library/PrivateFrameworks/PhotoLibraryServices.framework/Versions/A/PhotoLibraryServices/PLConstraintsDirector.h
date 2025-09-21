@class PFCameraViewfinderSessionWatcher, NSString, NSURL, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLConstraintsDirector : NSObject <PFCameraViewfinderSessionWatcherDelegate> {
    BOOL _deferredProcessingOngoing;
    int _outstandingCaptures;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_bonusTimer;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    long long _faceQuickClassificationRequestID;
    NSURL *_photoLibraryURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cameraWatcherDidChangeState:(id)a0;
- (id)initWithPhotoLibraryURL:(id)a0;
- (void)informAssetsFinishedDeferredProcessing;
- (void)informAssetDeferredProcessingOccurring;
- (void)informPhotoCapturedThatNeedsQuickFace;
- (void)_requestMediaAnalysisQuickFaceProcessing;
- (void).cxx_destruct;
- (void)informPhotoCapturedThatNeedsDeferredProcessing;

@end
