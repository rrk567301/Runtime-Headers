@class CSDeviceActivationEvent, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CSDeviceActivationEventNotificationHandler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMapTable *delegates;
@property (retain, nonatomic) CSDeviceActivationEvent *pendingActivationEvent;
@property (copy, nonatomic) id /* block */ pendingCompletion;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)start;
- (void)stop;
- (void)_notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)_startMonitoring;
- (void)notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDelegate:(id)a0 forType:(unsigned long long)a1;
- (BOOL)_hasPendingActivationForType:(unsigned long long)a0;
- (BOOL)_isVoiceTriggerEvent:(id)a0;

@end
