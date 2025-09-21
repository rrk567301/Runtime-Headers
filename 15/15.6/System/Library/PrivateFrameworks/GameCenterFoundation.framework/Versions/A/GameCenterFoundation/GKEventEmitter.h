@class NSMutableArray, NSHashTable;

@interface GKEventEmitter : NSObject

@property (retain, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) NSMutableArray *supportedProtocols;
@property (nonatomic) char shouldQueue;
@property (retain, nonatomic) NSMutableArray *queuedEvents;

+ (id)eventEmitterForProtocols:(id)a0;
+ (id)eventEmitterForProtocols:(id)a0 shouldQueue:(char)a1;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)registerListener:(id)a0;
- (void)unregisterListener:(id)a0;
- (void)dispatchQueuedEventsToListener:(id)a0;
- (id)invocationForProtocol:(id)a0 selector:(SEL)a1;
- (id)initWithSupportedProtocols:(id)a0 shouldQueue:(char)a1;
- (char)listenerRegisteredForSelector:(SEL)a0;
- (id)methodSignatureForProtocol:(id)a0 selector:(SEL)a1;
- (void)unregisterAllListeners;

@end
