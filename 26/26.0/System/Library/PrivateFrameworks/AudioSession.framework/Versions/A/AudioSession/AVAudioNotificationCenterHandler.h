@interface AVAudioNotificationCenterHandler : NSObject <AVAudioNotificationCenterServerDelegate> {
    id /* block */ _propertyNotificationHandler;
    id /* block */ _interruptionHandler;
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } _mutex;
}

@property (copy, nonatomic) id /* block */ propertyNotificationHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)handleInterruptionNotifications:(id)a0;
- (void)handlePropertyNotifications:(id)a0;

@end
