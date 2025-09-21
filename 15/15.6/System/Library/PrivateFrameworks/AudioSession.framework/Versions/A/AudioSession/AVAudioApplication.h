@interface AVAudioApplication : NSObject {
    struct unique_ptr<caulk::synchronized<as::client::AVAudioApplicationImpl>, std::default_delete<caulk::synchronized<as::client::AVAudioApplicationImpl>>> { struct __compressed_pair<caulk::synchronized<as::client::AVAudioApplicationImpl> *, std::default_delete<caulk::synchronized<as::client::AVAudioApplicationImpl>>> { void *__value_; } __ptr_; } _impl;
}

@property (class, readonly) AVAudioApplication *sharedInstance;

@property (readonly) unsigned int clientID;
@property (readonly, nonatomic, getter=isInputMuted) char inputMuted;
@property (readonly) long long recordPermission;
@property (readonly) long long microphoneInjectionPermission;

+ (void)requestRecordPermissionWithCompletionHandler:(id /* block */)a0;
+ (char)allowAppToInitiatePlaybackTemporarily:(id)a0 error:(id *)a1;
+ (char)appleTVSupportsEnhanceDialogue;
+ (char)currentRouteSupportsEnhanceDialogue:(id *)a0;
+ (char)getEnhanceDialogueLevel:(long long *)a0 error:(id *)a1;
+ (char)iosDeviceSupportsEnhanceDialogue;
+ (id)muteRunningInputs:(id *)a0;
+ (void)requestMicrophoneInjectionPermissionWithCompletionHandler:(id /* block */)a0;
+ (char)setEnhanceDialogueLevel:(long long)a0 error:(id *)a1;
+ (char)setEnhanceDialoguePreference:(long long)a0 error:(id *)a1;
+ (char)toggleInputMute:(id *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initDelegateForProcess:(struct { unsigned int x0[8]; })a0 processAttribution:(id)a1;
- (id)initPrivate:(id)a0;
- (id)initProxyForProcess:(struct { unsigned int x0[8]; })a0;
- (id)initWithSpecification:(id)a0;
- (void)postNotificationName:(id)a0 userInfo:(id)a1;
- (id)privateCallInputMuteHandlerBlock:(id /* block */)a0 inputMuted:(char)a1 isTopDownMute:(char)a2 context:(id)a3;
- (char)privateCreateAudioApplicationInServer:(id)a0;
- (void)privateEnableSystemMute:(char)a0;
- (struct tuple<int, id<NSSecureCoding>> { struct __tuple_impl<std::__tuple_indices<0, 1>, int, id<NSSecureCoding>> { int x0; id x1; } x0; })privateGetAppProperty:(id)a0;
- (struct tuple<std::shared_ptr<as::client::XPCConnection>, as::ProcessIdentity, unsigned int> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, std::shared_ptr<as::client::XPCConnection>, as::ProcessIdentity, unsigned int> { struct shared_ptr<as::client::XPCConnection> { struct XPCConnection *x0; struct __shared_weak_count *x1; } x0; struct ProcessIdentity { struct { unsigned int x0[8]; } x0; int x1; int x2; } x1; unsigned int x2; } x0; })privateGetConnection;
- (struct sync_guard<as::client::AVAudioApplicationImpl, caulk::mach::unfair_lock> { struct unfair_lock *x0; struct value_holder<as::client::AVAudioApplicationImpl> { struct AVAudioApplicationImpl *x0; } x1; })privateGetImplGuard;
- (struct tuple<int, id<NSSecureCoding>> { struct __tuple_impl<std::__tuple_indices<0, 1>, int, id<NSSecureCoding>> { int x0; id x1; } x0; })privateGetMXProperty:(id)a0;
- (void)privateHandlePing;
- (void)privateOptInToStemClickMuting;
- (char)privateRecreateAudioApplicationInServer;
- (int)privateSetAppProperty:(id)a0 value:(id)a1;
- (int)privateSetAppProperty:(id)a0 value:(id)a1 guard:(void *)a2;
- (char)privateSetInputMuteStateChangeHandler:(id /* block */)a0 error:(id *)a1;
- (char)privateSetInputMuted:(char)a0 context:(id)a1 error:(id *)a2;
- (char)privateSetInputMutedPrimaryOrDelegate:(char)a0 context:(id)a1 error:(id *)a2;
- (char)privateSetInputMutedProxy:(char)a0 error:(id *)a1;
- (int)privateSetMXPropertyOnAllSessions:(id)a0 value:(id)a1;
- (int)privateUpdateAppProperty:(id)a0 value:(id)a1 context:(id)a2;
- (id)sessionIDs;
- (char)setInputMuteStateChangeHandler:(id /* block */)a0 error:(id *)a1;
- (char)setInputMuted:(char)a0 context:(id)a1 error:(id *)a2;
- (char)setInputMuted:(char)a0 error:(id *)a1;
- (char)stemClickMutingEnabled;

@end
