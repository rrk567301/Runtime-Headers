@class NSString, NSObject;
@protocol OS_dispatch_queue, AFHearablesGestureObserver;

@interface AFHearablesClientRegistration : NSObject

@property (readonly, weak, nonatomic) id<AFHearablesGestureObserver> observer;
@property (readonly, nonatomic) unsigned long long contexts;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (readonly, copy, nonatomic) NSString *clientKey;

- (void).cxx_destruct;
- (id)description;
- (void)invokeActiveGestureContextsChangeCallback:(unsigned long long)a0 added:(unsigned long long)a1 removed:(unsigned long long)a2 reason:(long long)a3;
- (id)initWithObserver:(id)a0 contexts:(unsigned long long)a1 observerQueue:(id)a2;
- (void)invokeGestureHandlerWithResponse:(id)a0;
- (BOOL)isStillAlive;

@end
