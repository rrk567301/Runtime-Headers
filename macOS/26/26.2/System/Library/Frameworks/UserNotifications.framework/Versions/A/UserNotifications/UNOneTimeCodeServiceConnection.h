@class NSString, NSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface UNOneTimeCodeServiceConnection : NSObject <UNOneTimeCodeClientProtocol> {
    NSMutableArray *_observers;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)removeObserver:(id)a0;
- (id)_queue_ensureConnection;
- (void)_queue_removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_queue_invalidatedConnection;
- (void)_queue_interruptedConnection;
- (void).cxx_destruct;
- (id)init;
- (void)_queue_addObserver:(id)a0;
- (void)_invalidate;
- (void)consumeCode:(id)a0;
- (void)detectedOneTimeCodes:(id)a0;
- (void)registerForUpdates;

@end
