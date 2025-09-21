@class LSSSubscriber, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _LSSSubscription : NSObject <LSSSubscription>

@property (retain, nonatomic) LSSSubscriber *subscriber;
@property (copy, nonatomic) id /* block */ activityHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned int options;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (id)lightSourceForTargetTime:(double)a0;

@end
