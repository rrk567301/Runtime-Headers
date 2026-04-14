@class RTTimer, NSRecursiveLock, RTTimerManager;
@protocol RTTransientObjectProtocol;

@interface RTTransientObject : NSProxy

@property (copy, nonatomic) id /* block */ backingObjectCreationBlock;
@property (retain, nonatomic) id backingObject;
@property (nonatomic) double backingObjectExpirationTimeInterval;
@property (retain, nonatomic) RTTimer *backingObjectExpirationTimer;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) double lastForwardedMessageTimeInterval;
@property (weak, nonatomic) id<RTTransientObjectProtocol> transientObjectDelegate;

- (id)initWithCreationBlock:(id /* block */)a0 timeout:(double)a1;
- (void)touch;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)__createTimerAssociatedWithBackingObject;
- (void).cxx_destruct;
- (id)__createBackingObject;
- (void)forwardInvocation:(id)a0;
- (void)__invalidateBackingObject;
- (void)__handleBackingObjectTimerExpired;
- (id)initWithCreationBlock:(id /* block */)a0 timeout:(double)a1 timerManager:(id)a2;
- (void)dealloc;

@end
