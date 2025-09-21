@class HMDBackgroundTaskManager, NSString, NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface HMDTimeEvent : HMDEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *timerID;
@property (readonly, nonatomic) HMDBackgroundTaskManager *backgroundTaskManager;
@property (readonly, nonatomic) char repetitive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (char)isValidAbsoluteDateComponents:(id)a0;
+ (char)isValidOffsetDateComponents:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (char)isActive;
- (void)_initialize;
- (char)_activate:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)_nextTimerDate;
- (void)_reactivateTriggerAfterDelay;
- (void)_updateRepetitive;
- (void)handleTimerFiredNotification:(id)a0;
- (id)initWithModel:(id)a0 home:(id)a1;
- (char)isCompatibleWithEvent:(id)a0;

@end
