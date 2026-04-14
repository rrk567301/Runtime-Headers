@class FigCaptureSessionAttachedSessionManager, NSString, NSMapTable, NSHashTable, FigCaptureOSStateHandle, NSObject;
@protocol OS_dispatch_queue;

@interface FigCaptureSessionObservatory : NSObject <FigCaptureOSStateDataProvider> {
    NSMapTable *_captureSessionsStorage;
    NSHashTable *_registeredObservers;
    NSObject<OS_dispatch_queue> *_queue;
    long long _lastRunningIdentifier;
    FigCaptureSessionAttachedSessionManager *_attachedSessionManager;
    FigCaptureOSStateHandle *_osStateHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedObservatory;
+ (void)initialize;

- (id)osStatePropertyList;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (BOOL)attachSessionToHostSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)dealloc;
- (void)captureSessionWasCreated:(struct OpaqueFigCaptureSession { } *)a0;
- (void)captureSessionInvalidated:(struct OpaqueFigCaptureSession { } *)a0;
- (id)init;

@end
