@class NSProtocolChecker, NSMutableArray, Protocol;

@interface IMInvocationQueue : NSObject

@property (readonly, nonatomic) char holdQueue;
@property (readonly, retain, nonatomic) NSMutableArray *queue;
@property (readonly, retain, nonatomic) NSMutableArray *options;
@property (readonly, retain, nonatomic) NSProtocolChecker *protocolChecker;
@property (retain, nonatomic) Protocol *protocol;
@property id target;
@property id delegate;
@property (nonatomic) double dequeueRate;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) unsigned long long count;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)peek;
- (int)_numberOfLimitedMessagesInQueue;
- (char)_acceptsOptions:(unsigned long long)a0;
- (void)_checkQueue;
- (id)_dequeueInvocation;
- (long long)_enqueueInvocation:(id)a0 options:(unsigned long long)a1;
- (void)_holdQueueNotification:(id)a0;
- (char)_insertInvocation:(id)a0 options:(unsigned long long)a1;
- (char)_invokeInvocation:(id)a0;
- (int)_maxQueueLimitSize;
- (unsigned long long)_optionsForInvocation:(id)a0;
- (void)_releaseQueueNotification:(id)a0;
- (char)_replaceSimilarInvocation:(id)a0;
- (void)_setQueueTimer;
- (void)_stepQueueNotification:(id)a0;
- (void)invokeAll;
- (void)removeAllInvocations;

@end
