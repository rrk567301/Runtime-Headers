@class NSMutableDictionary, NSTimer, NSData, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMFKeyValueDatabase : HMFObject <HMFMemoryObserver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *inMemoryDictionary;
@property (retain, nonatomic) NSData *diskRepresentation;
@property (retain, nonatomic) NSTimer *syncTimer;
@property (nonatomic) double syncDelayInSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)memoryMonitor:(id)a0 didReceiveMemoryEvent:(long long)a1;
- (BOOL)sync:(id *)a0;
- (id)dictionary;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (id)keys;
- (id)values;
- (BOOL)containsKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)dealloc;
- (void)_cancelSyncTimer;
- (void)_startDelayedSyncTimerIfNeeded;
- (BOOL)_syncWithoutTimerHandling:(id *)a0;
- (BOOL)removeAllEntriesWithError:(id *)a0;

@end
