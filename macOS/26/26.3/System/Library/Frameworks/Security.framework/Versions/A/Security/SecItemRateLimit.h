@class NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface SecItemRateLimit : NSObject {
    BOOL _forceEnabled;
    NSObject<OS_dispatch_queue> *_dataQueue;
}

@property (readonly, nonatomic) int roCapacity;
@property (readonly, nonatomic) double roRate;
@property (readonly, nonatomic) int rwCapacity;
@property (readonly, nonatomic) double rwRate;
@property (readonly, nonatomic) double limitMultiplier;
@property (readonly, nonatomic) NSDate *roBucket;
@property (readonly, nonatomic) NSDate *rwBucket;

+ (id)instance;
+ (void)resetStaticRateLimit;
+ (id)getStaticRateLimit;

- (BOOL)isEnabled;
- (BOOL)isReadOnlyAPICallWithinLimits;
- (id)init;
- (BOOL)consumeTokenFromBucket:(BOOL)a0;
- (BOOL)isModifyingAPICallWithinLimits;
- (void)forceEnabled:(BOOL)a0;
- (BOOL)shouldCountAPICalls;
- (void).cxx_destruct;

@end
