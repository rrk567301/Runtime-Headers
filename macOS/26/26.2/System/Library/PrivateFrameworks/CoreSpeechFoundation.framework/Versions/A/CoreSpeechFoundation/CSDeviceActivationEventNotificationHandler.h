@class CSDeviceActivationEvent, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CSDeviceActivationEventNotificationHandler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMapTable *delegates;
@property (retain, nonatomic) CSDeviceActivationEvent *pendingActivationEvent;
@property (copy, nonatomic) id /* block */ pendingCompletion;

+ (id)sharedInstance;

- (void)_notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void)stop;
- (void)_startMonitoring;
- (void).cxx_destruct;
- (void)start;
- (void)_stopMonitoring;
- (id)init;
- (void)notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)setDelegate:(id)a0 forType:(unsigned long long)a1;
- (BOOL)_hasPendingActivationForType:(unsigned long long)a0;
- (BOOL)_isVoiceTriggerEvent:(id)a0;

@end
