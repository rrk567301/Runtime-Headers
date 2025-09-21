@class RBSAssertion, NSString, PETAggregateState, NSMutableDictionary, PETConfig, NSObject, RBSTarget;
@protocol OS_dispatch_queue;

@interface PETEventTracker2 : NSObject <RBSAssertionObserving> {
    NSObject<OS_dispatch_queue> *_loggingQueue;
    int _loggingQueueSize;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _loggingQueueLock;
    char _inited;
    RBSTarget *_rbsTarget;
    RBSAssertion *_rbsAssertion;
    char _rbsShouldInvalidate;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _rbsAssertionLock;
    char _isProcessManagedByRBS;
}

@property char isTesting;
@property char isAsyncEnabled;
@property (retain) NSString *rootDir;
@property (retain) NSString *logStoresDir;
@property (retain) PETConfig *config;
@property (readonly, nonatomic) PETAggregateState *aggregateState;
@property (retain) NSMutableDictionary *storeCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_writeMessage:(id)a0 objCClassName:(id)a1;
+ (id)defaultRootDir;
+ (id)formattedTextForAggregatedMessage:(id)a0;
+ (id)formattedTextForUnaggregatedMessage:(id)a0 messageGroup:(id)a1 config:(id)a2;
+ (double)roundToSigFigs:(double)a0 sigFigs:(unsigned long long)a1;
+ (unsigned int)typeIdForMessageName:(id)a0;

- (void).cxx_destruct;
- (void)_init;
- (void)logMessage:(id)a0;
- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (void)assertionWillInvalidate:(id)a0;
- (void)trackScalarForMessage:(id)a0;
- (void)trackScalarForMessage:(id)a0 count:(int)a1;
- (void)trackDistributionForMessage:(id)a0 value:(double)a1;
- (void)trackScalarForMessage:(id)a0 updateCount:(int)a1;
- (void)_dispatchAsyncForLogging:(id /* block */)a0 txnName:(const char *)a1;
- (id)_getLogStore:(id)a0;
- (void)_initWithRootDir:(id)a0 config:(id)a1;
- (void)_logMessage:(id)a0 subGroup:(id)a1;
- (void)_logMessageData:(id)a0 objcClassName:(id)a1 subGroup:(id)a2;
- (double)_roundToSigFigs:(double)a0 forRawMessage:(id)a1;
- (void)_runBlockWithRBSAssertion:(id /* block */)a0;
- (void)_trackDistributionForMessage:(id)a0 value:(double)a1;
- (void)_trackScalarForMessage:(id)a0 count:(int)a1 overwrite:(char)a2;
- (void)clearLogStores;
- (void)enumerateAggregatedMessagesWithBlock:(id /* block */)a0 clearStore:(char)a1;
- (void)enumerateMessageGroups:(id /* block */)a0;
- (void)enumerateMessagesWithBlock:(id /* block */)a0 clearStore:(char)a1;
- (void)enumerateMessagesWithBlock:(id /* block */)a0 messageGroup:(id)a1 clearStore:(char)a2;
- (id)initForTestingWithRootDir:(id)a0;
- (id)initWithAsyncEnabled:(char)a0;
- (id)initWithRootDir:(id)a0 config:(id)a1;
- (void)logMessage:(id)a0 subGroup:(id)a1;
- (void)logMessageData:(id)a0 objcClassName:(id)a1 subGroup:(id)a2;
- (void)setTestingEnvironment;

@end
