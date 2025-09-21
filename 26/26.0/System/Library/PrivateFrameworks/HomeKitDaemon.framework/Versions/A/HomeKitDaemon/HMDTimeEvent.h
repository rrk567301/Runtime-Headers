@class HMDBackgroundTaskManager, NSString, NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface HMDTimeEvent : HMDEvent <NSSecureCoding, HMDDumpState, HMFLogging, HMDHomeMessageReceiver>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *timerID;
@property (readonly, nonatomic) HMDBackgroundTaskManager *backgroundTaskManager;
@property (readonly, nonatomic) BOOL repetitive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (BOOL)isValidAbsoluteDateComponents:(id)a0;
+ (BOOL)isValidOffsetDateComponents:(id)a0;

- (void)_initialize;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isActive;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_activate:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)_nextTimerDate;
- (void)_reactivateTriggerAfterDelay;
- (void)_updateRepetitive;
- (void)handleTimerFiredNotification:(id)a0;
- (id)initWithModel:(id)a0 home:(id)a1;
- (BOOL)isCompatibleWithEvent:(id)a0;

@end
