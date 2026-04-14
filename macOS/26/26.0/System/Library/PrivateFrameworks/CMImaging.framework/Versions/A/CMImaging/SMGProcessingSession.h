@class NSMutableData, NSObject;
@protocol OS_dispatch_semaphore;

@interface SMGProcessingSession : NSObject {
    struct OpaqueFigCaptureISPProcessingSession { } *_ispProcessingSession;
    NSObject<OS_dispatch_semaphore> *_ispSessionPrepareSemaphore;
    int _ispPrepareStatus;
    BOOL _haveWaitedOnISPSessionPrepareSemaphore;
    NSMutableData *_ispProcessingParams;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
