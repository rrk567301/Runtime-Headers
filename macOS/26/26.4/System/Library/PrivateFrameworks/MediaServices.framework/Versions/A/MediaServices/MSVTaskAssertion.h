@class NSString, BKSProcessAssertion, NSObject;
@protocol OS_dispatch_source;

@interface MSVTaskAssertion : NSObject {
    NSString *_uuid;
    NSString *_subsystem;
    int _pid;
    NSObject<OS_dispatch_source> *_invalidationTimer;
    BOOL _acquired;
    double _startTime;
    BKSProcessAssertion *_processAssertion;
}

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)_cancelInvalidationTimerWithCompletion:(id /* block */)a0;
- (BOOL)acquire;
- (id)_initWithName:(id)a0 bundleID:(id)a1 pid:(int)a2 subsystem:(id)a3 reason:(unsigned long long)a4 flags:(unsigned long long)a5;
- (id)initWithName:(id)a0 pid:(int)a1 bundleID:(id)a2 subsystem:(id)a3 reason:(unsigned long long)a4 flags:(unsigned long long)a5;
- (unsigned int)_BSKFlagsForMSVFlags:(unsigned long long)a0;
- (BOOL)isAcquired;
- (void)invalidateOnDate:(id)a0;
- (void).cxx_destruct;
- (unsigned int)_BSKReasonForMSVReason:(unsigned long long)a0;
- (id)initWithName:(id)a0 bundleID:(id)a1 subsystem:(id)a2 reason:(unsigned long long)a3 flags:(unsigned long long)a4;
- (void)invalidate;
- (id)init;
- (id)initWithName:(id)a0 pid:(int)a1 subsystem:(id)a2 reason:(unsigned long long)a3 flags:(unsigned long long)a4;
- (id)description;
- (void)dealloc;

@end
