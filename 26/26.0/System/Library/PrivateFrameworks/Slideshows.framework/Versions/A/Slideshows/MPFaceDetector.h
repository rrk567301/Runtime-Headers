@class MPDocument, NSTimer, NSOperationQueue, NSMutableSet, NSObject, NSLock;
@protocol MRMarimbaPlayback;

@interface MPFaceDetector : NSObject {
    NSOperationQueue *mDetectionQueue;
    NSMutableSet *mPathsInQueue;
    NSLock *mPathQueueLock;
    NSMutableSet *mPlayingSlides;
    NSLock *mPlayingSlidesLock;
    NSLock *mStartStopLock;
    NSTimer *mCheckTimer;
}

@property (retain, nonatomic) MPDocument *document;
@property (retain, nonatomic) NSObject<MRMarimbaPlayback> *renderer;
@property (nonatomic) BOOL isCancelled;

- (void)_start;
- (void)start;
- (void)dealloc;
- (BOOL)suspended;
- (void)stop;
- (void)suspend;
- (void)resume;
- (id)init;
- (void)_setupTimer;
- (BOOL)_pathIsInQueue:(id)a0;
- (void)_addPathToQueue:(id)a0;
- (void)_checkPlayingSlides;
- (void)_removePathToQueue:(id)a0;
- (void)checkPlayingSlides;
- (void)detectFaces:(id)a0;

@end
