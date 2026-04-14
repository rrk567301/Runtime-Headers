@class AVCaptureSession, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVCaptureOutputInternal : NSObject {
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    struct OpaqueFigCaptureSession { } *figCaptureSession;
    AVCaptureSession *session;
    NSString *sinkID;
    NSMutableArray *connections;
    int changeSeed;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } metadataTransform;
    double rollAdjustment;
    BOOL physicallyMirrorsVideo;
    BOOL deferredStartEnabled;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
