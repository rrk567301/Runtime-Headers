@class NSObject;
@protocol OS_dispatch_queue;

@interface HUUtilities : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *routingQueue;

+ (id)sharedUtilities;
+ (id)XDCObjectFromObject:(id)a0;
+ (id)objectFromXDCObject:(id)a0;

- (void).cxx_destruct;
- (BOOL)deviceIsTinker;
- (void)updateHearingFeatureUsage;
- (void)addHearingFeatureUsage:(unsigned long long)a0;

@end
