@class NSUUID, NSCalendar, NSArray, NSString, HMFDispatchContext, HMFMessageDispatcher, NSObject, HMDHome;
@protocol OS_dispatch_queue, HMDHomeActivityStateManagerDataSource, HMDHomeActivityStateScheduleDelegate;

@interface HMDHomeActivityStateSchedule : NSObject <HMFMessageReceiver, HMFLogging, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, nonatomic) id<HMDHomeActivityStateManagerDataSource> dataSource;
@property (readonly, weak, nonatomic) HMDHome *home;
@property (readonly, nonatomic) NSCalendar *gregorian;
@property (readonly, nonatomic) HMFDispatchContext *workContext;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSArray *scheduleEntries;
@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) id<HMDHomeActivityStateScheduleDelegate> delegate;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)_registerForMessages;
- (void)configureWithDataSource:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setScheduleEntries:(id)a0;
- (void)_handleUpdateScheduleEntriesMessage:(id)a0;
- (id)_relayMessageToPrimaryResident:(id)a0 inContext:(id)a1;
- (void)_relayOrHandleMessage:(id)a0 inContext:(id)a1 then:(id /* block */)a2;
- (id)_scheduleEntriesFromPayload:(id)a0;
- (BOOL)_validateScheduleEntries:(id)a0;
- (id)endDateIfActiveScheduleEntry;
- (id)initWithActivityState:(unsigned long long)a0;
- (id)nextStartDate;
- (void)notifyObserversOfHomeActivityStateScheduleUpdate;

@end
