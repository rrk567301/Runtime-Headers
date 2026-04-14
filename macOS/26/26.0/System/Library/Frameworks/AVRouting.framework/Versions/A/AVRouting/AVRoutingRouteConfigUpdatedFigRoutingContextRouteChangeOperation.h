@class AVInputContextDestinationChange, NSString, AVRoutingWeakReference, NSObject, AVOutputContextDestinationChange;
@protocol OS_dispatch_queue;

@interface AVRoutingRouteConfigUpdatedFigRoutingContextRouteChangeOperation : AVRoutingOperation <AVDestinationChangeResultSource> {
    AVRoutingWeakReference *_weakObserver;
    struct OpaqueFigRoutingContext { } *_routingContext;
    struct __CFString { } *_routeChangeID;
    id /* block */ _routeChangeBlock;
    NSObject<OS_dispatch_queue> *_routeChangeIvarAccessQueue;
    AVOutputContextDestinationChange *_result;
    AVInputContextDestinationChange *_resultInput;
    BOOL _inputRoutePicked;
}

@property (readonly, nonatomic) AVOutputContextDestinationChange *result;
@property (readonly, nonatomic) AVInputContextDestinationChange *resultInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (BOOL)isAsynchronous;
- (void)start;
- (void)dealloc;
- (id)init;
- (void)_routeConfigUpdateWithID:(struct __CFString { } *)a0 endedWithReason:(struct __CFString { } *)a1;
- (void)_setResultIfNotAlreadySet:(id)a0;
- (void)_setResultInputIfNotAlreadySet:(id)a0;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { } *)a0 routeChangeID:(struct __CFString { } *)a1 routeChangeBlock:(id /* block */)a2 isInputContextOperation:(BOOL)a3;

@end
