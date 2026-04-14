@class NSString, NSXPCConnection;

@interface IASUnifiedProgressManager : NSObject <IASUnifiedProgressConnectProtocol, NSXPCListenerDelegate>

@property (retain) NSXPCConnection *progressAppConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (float)currentProgress;
- (id)_progressApp;
- (id)_progressAppProxy;
- (BOOL)_isModernOS;
- (void)addPhaseNamed:(id)a0 withProgress:(double)a1 exitDelay:(int)a2;
- (BOOL)currentlyHasProgressInfo;
- (BOOL)currentlyShowingUI;
- (void)addPhaseNamed:(id)a0 withProgress:(double)a1;

@end
