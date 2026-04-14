@class NSProtocolChecker, NSMutableArray, Protocol;

@interface IMInvocationQueue : NSObject

@property (readonly, nonatomic) BOOL holdQueue;
@property (readonly, retain, nonatomic) NSMutableArray *queue;
@property (readonly, retain, nonatomic) NSMutableArray *options;
@property (readonly, retain, nonatomic) NSProtocolChecker *protocolChecker;
@property (retain, nonatomic) Protocol *protocol;
@property id target;
@property id delegate;
@property (nonatomic) double dequeueRate;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) unsigned long long count;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)peek;
- (void)_checkQueue;
- (void)_stepQueueNotification:(id)a0;
- (void)_holdQueueNotification:(id)a0;
- (void)_releaseQueueNotification:(id)a0;
- (void)_setQueueTimer;
- (BOOL)_invokeInvocation:(id)a0;
- (unsigned long long)_optionsForInvocation:(id)a0;
- (int)_numberOfLimitedMessagesInQueue;
- (int)_maxQueueLimitSize;
- (BOOL)_acceptsOptions:(unsigned long long)a0;
- (BOOL)_replaceSimilarInvocation:(id)a0;
- (BOOL)_insertInvocation:(id)a0 options:(unsigned long long)a1;
- (long long)_enqueueInvocation:(id)a0 options:(unsigned long long)a1;
- (id)_dequeueInvocation;
- (void)removeAllInvocations;
- (void)invokeAll;

@end
