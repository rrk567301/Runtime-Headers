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

- (void)dealloc;
- (id)init;
- (void)resume;
- (void)start;
- (void)suspend;
- (BOOL)suspended;
- (void)stop;
- (void)_start;
- (void)_setupTimer;
- (void)detectFaces:(id)a0;
- (void)_checkPlayingSlides;
- (void)checkPlayingSlides;
- (void)_addPathToQueue:(id)a0;
- (void)_removePathToQueue:(id)a0;
- (BOOL)_pathIsInQueue:(id)a0;

@end
