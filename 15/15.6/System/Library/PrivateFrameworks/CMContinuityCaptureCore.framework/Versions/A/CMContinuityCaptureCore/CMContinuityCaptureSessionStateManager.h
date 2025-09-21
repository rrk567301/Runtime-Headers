@class NSMapTable, NSMutableDictionary, NSHashTable, CMContinuityCaptureActiveSession, NSObject;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureSessionStateManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _sessionTerminationGracePeriodInSec;
    NSMapTable *_pendingStopCompletionDevices;
    NSMutableDictionary *_activeStreamDevicesByEntity;
    NSHashTable *_skippedStopStreamByDevices;
    CMContinuityCaptureActiveSession *_activeSession;
}

@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, retain, nonatomic) CMContinuityCaptureActiveSession *activeSession;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithQueue:(id)a0;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)shouldResetConnectionForDevice:(id)a0;
- (id)_devicesWithPendingStopSession;
- (char)_isStreamingForDevice:(id)a0;
- (char)_shouldResetConnectionForDevice:(id)a0;
- (char)_startSessionWithDevice:(id)a0 forTransportType:(long long)a1 validateTransport:(char)a2 initiatedOnCommunalDevice:(char)a3 outError:(id *)a4;
- (void)_startStreamForDevice:(id)a0 startCompletion:(id /* block */)a1 startSkippedCompletion:(id /* block */)a2;
- (void)_stopCurrentSession:(id)a0;
- (void)_stopStreamForDevice:(id)a0 option:(long long)a1 completion:(id /* block */)a2;
- (char)startSessionWithDevice:(id)a0 forTransportType:(long long)a1 validateTransport:(char)a2 initiatedOnCommunalDevice:(char)a3 outError:(id *)a4;
- (void)startStreamForDevice:(id)a0 startCompletion:(id /* block */)a1 startSkippedCompletion:(id /* block */)a2;
- (void)stopCurrentSession:(id)a0 syncOnOwnedQueue:(char)a1;
- (void)stopStreamForDevice:(id)a0 option:(long long)a1 completion:(id /* block */)a2;

@end
