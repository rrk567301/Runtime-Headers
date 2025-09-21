@class NSUUID, NSError, HMFTimer, NSString, NSDate, HMFActivity, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_voucher;

@interface HMFOperation : NSOperation <HMFLogging, HMFTimerDelegate, HMFObject> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _executing;
    char _finished;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_voucher> *_voucher;
    char _qosWasSet;
}

@property (readonly) NSUUID *identifier;
@property (readonly, nonatomic) HMFTimer *timer;
@property (readonly) NSObject<OS_dispatch_queue> *underlyingQueue;
@property (retain) HMFActivity *activity;
@property (readonly, copy) NSDate *timeoutDate;
@property (readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (char)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)shortDescription;
+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)setQualityOfService:(long long)a0;
- (void)finish;
- (void)start;
- (void)cancel;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (void)main;
- (void)cancelWithError:(id)a0;
- (id)initWithTimeout:(double)a0;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;

@end
