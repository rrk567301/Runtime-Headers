@class AVAudioSessionXPCServer, NSXPCConnection, AVAudioSessionXPCClientRelay;
@protocol AVAudioSessionServerDelegate;

@interface AVAudioSessionRemoteXPCClient : NSObject <SessionManagerXPCProtocol> {
    AVAudioSessionXPCServer *_server;
    struct ProcessInfo { struct ProcessToken { unsigned int mValue; } token; NSXPCConnection *xpcConnection; AVAudioSessionXPCClientRelay *mClientRelay; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } mProcessName; } _clientProcess;
    AVAudioSessionXPCClientRelay *_clientRelay;
    id<AVAudioSessionServerDelegate> _serverDelegate;
    BOOL _invalidated;
    const char *_replyWatchdogFunctionName;
    struct time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1, 1000000>>> { struct duration<long long, std::ratio<1, 1000000>> { long long __rep_; } __d_; } _replyWatchdogMinTimestamp;
    struct reply_watchdog_factory { BOOL mDebugging; int mDefaultTimeoutMS; struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } mTimeoutHandler; } _defaultReplyWatchdogFactory;
    struct reply_watchdog_factory { BOOL mDebugging; int mDefaultTimeoutMS; struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } mTimeoutHandler; } _longReplyWatchdogFactory;
}

- (void)deactivateSession:(unsigned int)a0 options:(unsigned long long)a1 priority:(id)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)createAudioApplicationForSpecification:(id)a0 reply:(id /* block */)a1;
- (void)addOrRemoveObserversToRemoteNotificationCenter:(BOOL)a0 forDelegate:(unsigned long long)a1 withSession:(unsigned int)a2 notifications:(id)a3 reply:(id /* block */)a4;
- (void)dealloc;
- (void)updateRunningIOStates:(unsigned int)a0 inputRunning:(BOOL)a1 outputRunning:(BOOL)a2 implicitCategory:(id)a3 deviceUIDs:(id)a4 reply:(id /* block */)a5;
- (void)getProperty:(unsigned int)a0 propertyName:(id)a1 MXProperty:(BOOL)a2 reply:(id /* block */)a3;
- (void)addMXNotificationListener:(unsigned int)a0 notificationName:(id)a1 reply:(id /* block */)a2;
- (void)invalidate;
- (void)reconfigureIONode:(unsigned int)a0 withSourceSession:(unsigned int)a1 sessionOwnerPID:(id)a2 playerType:(unsigned int)a3 reply:(id /* block */)a4;
- (void)setProperties:(unsigned int)a0 values:(id)a1 MXProperties:(BOOL)a2 batchStrategy:(int)a3 genericMXPipe:(BOOL)a4 reply:(id /* block */)a5;
- (BOOL)containsPrivilegedIONodeProperties:(id)a0;
- (id)clientRelay;
- (void)pingWithReply:(id /* block */)a0;
- (void)createSession:(unsigned long long)a0 sourceAuditToken:(struct { unsigned int x0[8]; })a1 sourceSessionID:(unsigned int)a2 nameOrDeviceUID:(id)a3 clientProcessName:(id)a4 clientProcessBundleID:(id)a5 useCaseIdentifier:(unsigned int)a6 reply:(id /* block */)a7;
- (void)getPropertiesIONode:(unsigned int)a0 properties:(id)a1 reply:(id /* block */)a2;
- (void)setMXPropertyOnAllSessions:(struct { unsigned int x0[8]; })a0 clientID:(unsigned int)a1 MXProperty:(id)a2 values:(id)a3 reply:(id /* block */)a4;
- (void)getMXPropertyGenericPipe:(unsigned int)a0 propertyName:(id)a1 reply:(id /* block */)a2;
- (void)sleepWithReply:(unsigned int)a0 reply:(id /* block */)a1;
- (void)invalidateIONode:(unsigned int)a0 reply:(id /* block */)a1;
- (void)getEnhanceDialogueLevelWithReply:(id /* block */)a0;
- (void)updateApplicationProperty:(struct { unsigned int x0[8]; })a0 clientID:(unsigned int)a1 propertyID:(id)a2 propertyValue:(id)a3 context:(id)a4 reply:(id /* block */)a5;
- (void)getApplicationProperty:(struct { unsigned int x0[8]; })a0 clientID:(unsigned int)a1 propertyID:(id)a2 isMXProperty:(BOOL)a3 reply:(id /* block */)a4;
- (void)getProperties:(unsigned int)a0 properties:(id)a1 reply:(id /* block */)a2;
- (void)setEnhanceDialoguePreference:(id)a0 reply:(id /* block */)a1;
- (void)getDeferredMessages:(unsigned int)a0 reply:(id /* block */)a1;
- (void)allowAppToInitiatePlaybackTemporarilyFromBackground:(id)a0 reply:(id /* block */)a1;
- (void)updateIODeviceState:(id)a0 forSession:(unsigned int)a1 reply:(id /* block */)a2;
- (void)activateSession:(unsigned int)a0 options:(unsigned long long)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)removeMXNotificationListener:(unsigned int)a0 notificationName:(id)a1 reply:(id /* block */)a2;
- (void)sessionIDs:(struct { unsigned int x0[8]; })a0 clientID:(unsigned int)a1 reply:(id /* block */)a2;
- (void)updateMicrophonePermission:(long long)a0 clientToken:(struct { unsigned int x0[8]; } *)a1 reply:(id /* block */)a2;
- (id).cxx_construct;
- (void)toggleInputMuteForRecordingProcess:(id /* block */)a0;
- (void)muteInputForRecordingProcesses:(id /* block */)a0;
- (void)setIOProperties:(unsigned int)a0 values:(id)a1 reply:(id /* block */)a2;
- (void)createIONodeWithSourceSession:(unsigned int)a0 sessionOwnerPID:(id)a1 playerType:(unsigned int)a2 reply:(id /* block */)a3;
- (void)destroyRemoteNotificationCenter:(unsigned long long)a0 withSession:(unsigned int)a1 reply:(id /* block */)a2;
- (void)setPropertiesIONode:(unsigned int)a0 values:(id)a1 reply:(id /* block */)a2;
- (id)initWithServer:(id)a0 process:(struct ProcessInfo { struct ProcessToken { unsigned int x0; } x0; id x1; id x2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x3; })a1 delegate:(id)a2;
- (void)setIONode:(unsigned int)a0 playState:(unsigned int)a1 modes:(unsigned int)a2 reply:(id /* block */)a3;
- (void)getPropertiesForCache:(unsigned int)a0 reply:(id /* block */)a1;
- (void)createRemoteNotificationCenterForSession:(unsigned int)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)getApplicationMessages:(struct { unsigned int x0[8]; })a0 clientID:(unsigned int)a1 reply:(id /* block */)a2;
- (void)setApplicationProperty:(struct { unsigned int x0[8]; })a0 clientID:(unsigned int)a1 propertyID:(id)a2 propertyValue:(id)a3 reply:(id /* block */)a4;
- (void)setEnhanceDialogueLevel:(id)a0 reply:(id /* block */)a1;

@end
