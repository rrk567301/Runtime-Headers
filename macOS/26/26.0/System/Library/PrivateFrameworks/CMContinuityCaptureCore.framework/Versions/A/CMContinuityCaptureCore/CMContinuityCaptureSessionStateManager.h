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

- (id)initWithQueue:(id)a0;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)shouldResetConnectionForDevice:(id)a0;
- (id)_devicesWithPendingStopSession;
- (BOOL)_isStreamingForDevice:(id)a0;
- (BOOL)_shouldResetConnectionForDevice:(id)a0;
- (BOOL)_startSessionWithDevice:(id)a0 forTransportType:(long long)a1 validateTransport:(BOOL)a2 initiatedOnCommunalDevice:(BOOL)a3 micOnly:(BOOL)a4 outError:(id *)a5;
- (void)_startStreamForDevice:(id)a0 startCompletion:(id /* block */)a1 startSkippedCompletion:(id /* block */)a2;
- (void)_stopCurrentSession:(id)a0;
- (void)_stopStreamForDevice:(id)a0 option:(long long)a1 completion:(id /* block */)a2;
- (BOOL)startSessionWithDevice:(id)a0 forTransportType:(long long)a1 validateTransport:(BOOL)a2 initiatedOnCommunalDevice:(BOOL)a3 micOnly:(BOOL)a4 outError:(id *)a5;
- (void)startStreamForDevice:(id)a0 startCompletion:(id /* block */)a1 startSkippedCompletion:(id /* block */)a2;
- (void)stopCurrentSession:(id)a0 syncOnOwnedQueue:(BOOL)a1;
- (void)stopStreamForDevice:(id)a0 option:(long long)a1 completion:(id /* block */)a2;

@end
