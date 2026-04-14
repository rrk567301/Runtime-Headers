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

- (BOOL)_acceptsOptions:(unsigned long long)a0;
- (int)_maxQueueLimitSize;
- (id)peek;
- (id)_dequeueInvocation;
- (void)invokeAll;
- (void)_releaseQueueNotification:(id)a0;
- (BOOL)_insertInvocation:(id)a0 options:(unsigned long long)a1;
- (void)_holdQueueNotification:(id)a0;
- (void)forwardInvocation:(id)a0;
- (long long)_enqueueInvocation:(id)a0 options:(unsigned long long)a1;
- (void)_checkQueue;
- (void).cxx_destruct;
- (unsigned long long)_optionsForInvocation:(id)a0;
- (void)_setQueueTimer;
- (void)_stepQueueNotification:(id)a0;
- (id)init;
- (BOOL)_invokeInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (int)_numberOfLimitedMessagesInQueue;
- (BOOL)_replaceSimilarInvocation:(id)a0;
- (void)removeAllInvocations;
- (void)dealloc;

@end
