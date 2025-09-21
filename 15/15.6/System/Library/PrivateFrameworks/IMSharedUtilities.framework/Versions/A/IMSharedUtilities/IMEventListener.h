@class NSObject;
@protocol OS_dispatch_semaphore;

@interface IMEventListener : NSObject

@property (nonatomic) double timerStart;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (weak) id target;
@property (copy) id /* block */ completionBlock;
@property (copy) id /* block */ willInvokeCompletion;
@property (copy) id /* block */ didInvokeCompletion;
@property double timeout;
@property (readonly, getter=isListening) char listening;
@property (readonly) double timeListeningStarted;
@property (readonly) double timeListeningStopped;
@property (readonly) double timeLastEventReceived;
@property (readonly) double elapsedWaitingTime;
@property (readonly) unsigned long long eventCount;
@property (nonatomic) char willRepeat;

+ (id)_mutableListenerDictionary;
+ (id)allListeners;
+ (id)eventListener;
+ (id)eventListenerWithNotificationName:(id)a0 object:(id)a1;

- (void).cxx_destruct;
- (void)reset;
- (void)_startListening;
- (void)_reset;
- (void)startListening;
- (void)stopListening;
- (void)waitForCompletion;
- (void)_cancelTimeoutTimer;
- (void)_stopListening;
- (void)_addToListeners;
- (void)_handleTimeout:(id)a0;
- (void)_didReceiveEvent:(char)a0 userInfo:(id)a1 error:(id)a2;
- (void)_dispatchStartEventBlock:(id /* block */)a0;
- (void)_invokeCompletion:(char)a0 userInfo:(id)a1 error:(id)a2;
- (void)_removeFromListeners;
- (void)_startTimeoutTimerIfNeeded;
- (id)createResult:(char)a0 userInfo:(id)a1 error:(id)a2;
- (void)startListeningForEventTarget:(id)a0 completion:(id /* block */)a1;
- (void)startListeningForEventTarget:(id)a0 sendStartingEvent:(id /* block */)a1 completion:(id /* block */)a2;
- (void)willReset;
- (void)willStartListening;
- (void)willStopListening;

@end
