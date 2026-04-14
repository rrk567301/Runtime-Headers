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
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)peek;
- (unsigned long long)_optionsForInvocation:(id)a0;
- (long long)_enqueueInvocation:(id)a0 options:(unsigned long long)a1;
- (BOOL)_invokeInvocation:(id)a0;
- (void)_setQueueTimer;
- (void)_checkQueue;
- (id)_dequeueInvocation;
- (int)_numberOfLimitedMessagesInQueue;
- (int)_maxQueueLimitSize;
- (BOOL)_acceptsOptions:(unsigned long long)a0;
- (BOOL)_replaceSimilarInvocation:(id)a0;
- (BOOL)_insertInvocation:(id)a0 options:(unsigned long long)a1;
- (void)_stepQueueNotification:(id)a0;
- (void)_holdQueueNotification:(id)a0;
- (void)_releaseQueueNotification:(id)a0;
- (void)removeAllInvocations;
- (void)invokeAll;

@end
