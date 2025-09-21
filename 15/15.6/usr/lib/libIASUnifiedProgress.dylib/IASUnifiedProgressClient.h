@class NSString, NSUUID, NSXPCConnection;

@interface IASUnifiedProgressClient : NSObject <IASUnifiedProgressConnectProtocol>

@property (retain) NSString *phaseName;
@property (retain) NSXPCConnection *connection;
@property (retain) NSUUID *uuid;
@property (copy) id /* block */ completionHandler;
@property float prevProgress;
@property (retain) NSString *prevStatus;
@property (retain) NSString *prevAlternateStatus;
@property char done;
@property char finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)setStatus:(id)a0;
- (void)setProgressIndicatorHidden:(char)a0;
- (void)reportProgress:(float)a0;
- (void)_registerConnection;
- (id)initWithPhaseName:(id)a0;
- (void)setProgress:(float)a0 animate:(char)a1;
- (void)showProgressUI;
- (void)setDone;
- (void)abortProgressUI;
- (void)_callCompletionHandler;
- (id)_clientInfo;
- (void)doneWithPhase;
- (void)hideProgressUI;
- (char)isShowingUI;
- (void)registerCompletionHandler:(id /* block */)a0;
- (void)reportProgress:(float)a0 animate:(char)a1;
- (void)reportStatus:(id)a0;
- (void)setAlternateStatus:(id)a0;
- (void)setBatteryIsLow:(char)a0;

@end
