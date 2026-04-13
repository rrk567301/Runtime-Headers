@class AVAudioSession, ATAudioSessionPropertyManager;

@interface ATAudioSessionClientImpl : NSObject {
    ATAudioSessionPropertyManager *mATAudioSessionPropertyManager;
    void *propertyListeners;
}

@property struct __CFRunLoop { } *clientRunLoop;
@property struct __CFString { } *clientRunLoopMode;
@property void /* function */ *clientInterruptionListenerProc;
@property void *clientUserData;
@property BOOL isInitialized;
@property (readonly) AVAudioSession *avas;
@property unsigned int interruptionType;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (int)initializeAVAudioSession:(struct __CFRunLoop { } *)a0 runLoopMode:(struct __CFString { } *)a1 listenerProc:(void /* function */ *)a2 userData:(void *)a3;
- (int)resetAudioSessionClientConfiguration;
- (int)AudioSessionSetActiveImpl:(unsigned char)a0 flags:(unsigned int)a1;
- (int)AudioSessionGetPropertyImpl:(unsigned int)a0 size:(unsigned int *)a1 data:(void *)a2;
- (int)AudioSessionSetPropertyImpl:(unsigned int)a0 size:(unsigned int)a1 data:(const void *)a2;
- (int)AudioSessionGetPropertySizeImpl:(unsigned int)a0 size:(unsigned int *)a1;
- (int)AudioSessionAddPropertyListenerImpl:(unsigned int)a0 userProc:(void /* function */ *)a1 userData:(void *)a2;
- (int)AudioSessionRemovePropertyListenerImpl:(unsigned int)a0;
- (int)AudioSessionRemovePropertyListenerWithUserDataImpl:(unsigned int)a0 userProc:(void /* function */ *)a1 userData:(void *)a2;
- (void)addNSNotificationListenerFor:(id)a0 selector:(SEL)a1;
- (void)addAVAudioSessionKVOObservers:(unsigned int)a0;
- (void)removeAVAudioSessionKVOObservers:(unsigned int)a0;
- (void)handleInterruption:(id)a0;
- (void)handleRouteChange:(id)a0;
- (void)handleServerDeath:(id)a0;
- (void)handleServerReset:(id)a0;
- (void)callPropertyListeners:(unsigned int)a0 data:(id)a1;

@end
