@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FigCaptureSessionAttachedSessionManager : NSObject {
    struct OpaqueFigCaptureSession { } *_currentPrimarySession;
    struct OpaqueFigCaptureSession { } *_currentlyStartingSession;
    int _currentlyStartingSessionChangeSeed;
    NSMutableArray *_attachedSessions;
    NSMutableArray *_detachingSessions;
    NSMutableArray *_sessionsToStart;
    NSMutableArray *_incompatibleSessions;
    NSObject<OS_dispatch_queue> *_queue;
    int _changeSeed;
}

+ (void)initialize;

- (id)init;

@end
