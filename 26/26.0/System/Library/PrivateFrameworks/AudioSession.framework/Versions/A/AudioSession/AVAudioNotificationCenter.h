@class NSMutableSet, AVAudioNotificationCenterHandler;
@protocol AVAudioNotificationCenterServer;

@interface AVAudioNotificationCenter : NSObject {
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } _mutex;
    id<AVAudioNotificationCenterServer> _server;
    NSMutableSet *_propertiesOfInterest;
    BOOL _wantsInterruptions;
    AVAudioNotificationCenterHandler *_handler;
    unsigned long long _delegateID;
    int _type;
}

- (void)dealloc;
- (void)invalidate;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setPropertyNotificationHandler:(id /* block */)a0;
- (unsigned long long)delegateID;
- (id)initWithServer:(id)a0 type:(int)a1;
- (id)locked_calculateFilter;
- (void)privateSetInterruptionNotificationHandler:(id /* block */)a0;
- (void)privateSetPropertyNotificationHandler:(id /* block */)a0;
- (void)privateStartObservingNotifications:(id)a0;
- (void)privateStopObservingNotifications:(id)a0;
- (void)setInterruptionNotificationHandler:(id /* block */)a0;
- (void)startObservingNotifications:(id)a0;
- (void)stopObservingNotifications:(id)a0;
- (void)unlocked_updateServerWithFilter:(id)a0;

@end
