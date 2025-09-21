@class NSUUID, _HMContext, NSArray, NSString, HMHome;

@interface HMHomeActivityStateSchedule : NSObject <HMFLogging, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) HMHome *home;
@property (readonly, nonatomic) _HMContext *context;
@property (readonly, nonatomic) BOOL homeActivityStateEnabled;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSArray *scheduleEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)configureWithContext:(id)a0;
- (void)_handleUpdateSchedules:(id)a0 withReason:(id)a1;
- (id)_messagePayloadFromScheduleEntries:(id)a0;
- (id)initWithUUID:(id)a0 home:(id)a1 scheduleEntries:(id)a2 state:(unsigned long long)a3 homeActivityStateEnabled:(BOOL)a4;
- (BOOL)setScheduleEntries:(id)a0;
- (void)setScheduleEntries:(id)a0 completion:(id /* block */)a1;

@end
