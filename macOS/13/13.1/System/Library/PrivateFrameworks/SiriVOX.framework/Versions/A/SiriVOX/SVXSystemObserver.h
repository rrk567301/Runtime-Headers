@class AFDeviceContextConnection, NSString, SVXDeviceContextAnnouncer, SVXModule;

@interface SVXSystemObserver : NSObject <SVXModuleInstance, SVXSessionActivityListening, AFDeviceContextConnectionDelegate> {
    SVXModule *_module;
    SVXDeviceContextAnnouncer *_deviceContextAnnouncer;
    AFDeviceContextConnection *_deviceContextConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_logSnapshot;
- (void)deviceContextConnection:(id)a0 didUpdateLocalDeviceContext:(id)a1;
- (void)getLocalDeviceContextWithCompletion:(id /* block */)a0;
- (void)deviceContextConnectionDidInvalidate:(id)a0;
- (id)initWithModule:(id)a0;
- (void)startWithModuleInstanceProvider:(id)a0 platformDependencies:(id)a1;
- (void)stopWithModuleInstanceProvider:(id)a0;
- (void)sessionWillChangeFromState:(long long)a0 toState:(long long)a1;
- (void)sessionDidChangeFromState:(long long)a0 toState:(long long)a1;
- (void)sessionWillPresentFeedbackWithDialogIdentifier:(id)a0;
- (void)sessionWillStartSoundWithID:(long long)a0;
- (void)sessionDidStartSoundWithID:(long long)a0;
- (void)sessionDidStopSoundWithID:(long long)a0 error:(id)a1;
- (void)sessionWillBecomeActiveWithActivationContext:(id)a0 turnID:(id)a1;
- (void)sessionDidBecomeActiveWithActivationContext:(id)a0 turnID:(id)a1;
- (void)sessionWillResignActiveWithOptions:(unsigned long long)a0 duration:(double)a1;
- (void)sessionDidResignActiveWithDeactivationContext:(id)a0;
- (void)audioSessionWillBecomeActive:(BOOL)a0 activationContext:(id)a1 deactivationContext:(id)a2;
- (void)audioSessionDidBecomeActive:(BOOL)a0 activationContext:(id)a1 deactivationContext:(id)a2;
- (void)sessionWillProcessAppLaunchWithBundleIdentifier:(id)a0;
- (void)sessionDidFailAppLaunchWithBundleIdentifier:(id)a0;
- (void)addDeviceContextListener:(id)a0;
- (void)removeDeviceContextListener:(id)a0;
- (void)_startObservingInfo;
- (void)_stopObservingInfo;
- (void)_startObservingDeviceContext;
- (void)_stopObservingDeviceContext;

@end
