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
- (float)currentProgress;
- (void)clear;
- (id)_progressApp;
- (void)addPhaseNamed:(id)a0 withProgress:(double)a1 exitDelay:(int)a2;
- (BOOL)_isModernOS;
- (id)_progressAppProxy;
- (void)addPhaseNamed:(id)a0 withProgress:(double)a1;
- (BOOL)currentlyHasProgressInfo;
- (BOOL)currentlyShowingUI;

@end
