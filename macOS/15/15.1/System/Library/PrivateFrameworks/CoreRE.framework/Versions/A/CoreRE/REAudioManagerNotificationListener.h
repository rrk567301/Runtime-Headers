@class AVAudioSession;

@interface REAudioManagerNotificationListener : NSObject {
    struct AudioSceneService { void /* function */ **x0; } *_owner;
    AVAudioSession *_audioSessionToFollow;
    struct UnfairLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } _audioSessionMutex;
}

@property (readonly) AVAudioSession *audioSessionToFollow;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithOwner:(void *)a0;
- (void)stop;
- (void)servicesLost:(id)a0;
- (void)servicesReset:(id)a0;
- (void)sessionInterrupted:(id)a0;

@end
