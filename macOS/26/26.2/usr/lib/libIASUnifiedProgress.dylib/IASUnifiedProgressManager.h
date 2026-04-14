@class NSString, NSXPCConnection;

@interface IASUnifiedProgressManager : NSObject <IASUnifiedProgressConnectProtocol, NSXPCListenerDelegate>

@property (retain) NSXPCConnection *progressAppConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)clear;
- (void).cxx_destruct;
- (float)currentProgress;
- (id)init;
- (void)dealloc;
- (BOOL)_isModernOS;
- (id)_progressApp;
- (id)_progressAppProxy;
- (void)addPhaseNamed:(id)a0 withProgress:(double)a1;
- (void)addPhaseNamed:(id)a0 withProgress:(double)a1 exitDelay:(int)a2;
- (BOOL)currentlyHasProgressInfo;
- (BOOL)currentlyShowingUI;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getProgressRangeFor:(id)a0;

@end
