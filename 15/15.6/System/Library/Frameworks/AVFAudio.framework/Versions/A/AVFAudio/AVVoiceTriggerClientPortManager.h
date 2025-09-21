@class NSObject;
@protocol OS_dispatch_queue;

@interface AVVoiceTriggerClientPortManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long portType;
@property (nonatomic) unsigned int deviceID;
@property (nonatomic) float hysteresisDurationSeconds;
@property (copy, nonatomic) id /* block */ runningStateChangeNotificationBlock;
@property (copy, nonatomic) id /* block */ muteStateChangeNotificationBlock;
@property (nonatomic) char listeningEnabled;
@property (nonatomic) char lastRunningStateSent;
@property (nonatomic) long long generation;
@property (nonatomic) char runningStateChangeNotificationRegistered;
@property (nonatomic) char muteStateChangeNotificationRegistered;

- (void).cxx_destruct;
- (void)callMuteStateChangeNotificationBlock:(char)a0;
- (void)callRunningStateChangeNotificationBlock:(char)a0;
- (id)initWithSerialQueue:(id)a0 portType:(unsigned long long)a1 hysteresisDurationSeconds:(float)a2 runningStateChangeNotificationBlock:(id /* block */)a3 muteStateChangeNotificationBlock:(id /* block */)a4;
- (void)notifyMuteStateChanged;
- (void)notifyRunningStateChangedWithHysteresis;

@end
