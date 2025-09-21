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

- (BOOL)_insertInvocation:(id)a0 options:(unsigned long long)a1;
- (long long)_enqueueInvocation:(id)a0 options:(unsigned long long)a1;
- (int)_numberOfLimitedMessagesInQueue;
- (void)dealloc;
- (id)peek;
- (id)_dequeueInvocation;
- (int)_maxQueueLimitSize;
- (void)_releaseQueueNotification:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)_setQueueTimer;
- (id)init;
- (unsigned long long)_optionsForInvocation:(id)a0;
- (void)_stepQueueNotification:(id)a0;
- (void)invokeAll;
- (BOOL)_acceptsOptions:(unsigned long long)a0;
- (void)removeAllInvocations;
- (BOOL)_replaceSimilarInvocation:(id)a0;
- (void)_holdQueueNotification:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)_invokeInvocation:(id)a0;
- (void)_checkQueue;
- (void).cxx_destruct;

@end
