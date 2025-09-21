@class NSString, NSCalendar, NSOperationQueue, LSSVector2SmoothFilter, NSObject;
@protocol OS_dispatch_queue, LSSProviderDelegate;

@interface LSSTimeBasedProvider : NSObject <LSSProvider> {
    double _animationInterval;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _animation;
    id /* block */ _update;
    NSCalendar *_calendar;
    void /* unknown type, empty encoding */ _targetLightDirection;
    LSSVector2SmoothFilter *_filteredLightAngle;
}

@property (readonly, nonatomic) double updatesPerCycle;
@property (readonly, nonatomic) double cycleInterval;
@property (weak, nonatomic) id<LSSProviderDelegate> delegate;
@property (nonatomic) long long features;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)secondsInMinute;
+ (double)secondsInDay;
+ (double)secondsInHour;

- (void)invalidate;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;

@end
