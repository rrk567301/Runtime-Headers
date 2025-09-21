@class NSString, NSMapTable, NSMutableSet, NSCondition, NSObject, _HKBehavior;
@protocol OS_dispatch_group, HDSemaphore, HDDatabaseConnectionPoolDelegate;

@interface HDDatabaseConnectionPool : NSObject <HDDiagnosticObject> {
    NSCondition *_cacheCondition;
    NSMutableSet *_cache;
    NSObject<OS_dispatch_group> *_flushGroup;
    unsigned long long _cacheGeneration;
    long long _cacheSize;
    long long _concurrentReaderLimit;
    _HKBehavior *_behavior;
    _Atomic int _count;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _checkoutLock;
    NSMapTable *_checkoutMap;
    id<HDSemaphore> _readerSemaphore;
    id<HDSemaphore> _writerSemaphore;
}

@property (readonly, weak, nonatomic) id<HDDatabaseConnectionPoolDelegate> delegate;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) long long cacheSize;
@property (readonly, nonatomic) long long concurrentReaderLimit;
@property (readonly, nonatomic) long long checkedOutDatabaseCount;
@property (readonly, nonatomic) NSString *debugIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diagnosticDescription;
- (void)dealloc;
- (id)flush;
- (void).cxx_destruct;
- (void)checkInConnection:(id)a0 flushImmediately:(BOOL)a1;
- (id)checkOutConnectionWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)initWithConcurrentReaderLimit:(long long)a0 behavior:(id)a1 debugIdentifier:(id)a2 delegate:(id)a3;
- (id)currentFlushGroup;

@end
