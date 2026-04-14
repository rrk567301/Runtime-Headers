@class NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface UNOneTimeCodeClient : NSObject <UNOneTimeCodeServiceConnectionObserver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentClient;

- (id)_init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)consumeCode:(id)a0;
- (void)oneTimeCodeServiceConnection:(id)a0 detectedOneTimeCodes:(id)a1;

@end
