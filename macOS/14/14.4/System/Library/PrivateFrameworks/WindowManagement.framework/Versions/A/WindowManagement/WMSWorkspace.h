@class NSDictionary, FBSWorkspace;
@protocol BSServiceDispatchingQueue;

@interface WMSWorkspace : NSObject <FBSWorkspaceDelegate> {
    void /* unknown type, empty encoding */ handlers;
    void /* unknown type, empty encoding */ internalWorkspace;
    void /* unknown type, empty encoding */ _workspaceSupportInterface;
    void /* unknown type, empty encoding */ _workspaceSupportConnection;
    void /* unknown type, empty encoding */ _workspaceSupportProxy;
    void /* unknown type, empty encoding */ internalServiceQueue;
}

@property (class, nonatomic, readonly) WMSWorkspace *shared;
@property (class, nonatomic) BOOL connectsUsingScenes;

@property (nonatomic, readonly) NSDictionary *stageFrames;
@property (nonatomic, readonly) NSDictionary *stages;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ endpoint;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ wmsEndpoint;
@property (nonatomic, readonly) FBSWorkspace *workspace;
@property (nonatomic, readonly) id<BSServiceDispatchingQueue> serviceQueue;

- (void)beginTransaction;
- (void)startLoginTransition;
- (void)commitTransaction:(id)a0;
- (void)willExitFullScreen;
- (void)hideApplication;
- (void)cycleWindows:(BOOL)a0;
- (void)didCancelTermination;
- (void)didEnterFullScreen:(id)a0;
- (void)didExitFullScreen;
- (void)didFinishRestoration;
- (void)finishLoginTransition;
- (void)orderAllWindowsFront:(unsigned long long)a0;
- (id)proposeKeyWindow:(id)a0;
- (id)proposeMainWindow:(id)a0;
- (void)unhideApplication;
- (void)willBeginTermination;
- (void)willEnterFullScreen:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeHandler:(id)a0;
- (void)addHandler:(id)a0;

@end
