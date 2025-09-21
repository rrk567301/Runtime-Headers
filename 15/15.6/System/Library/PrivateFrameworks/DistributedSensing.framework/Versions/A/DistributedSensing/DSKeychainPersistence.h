@class NSObject;
@protocol OS_dispatch_queue;

@interface DSKeychainPersistence : NSObject {
    NSObject<OS_dispatch_queue> *_clientQueue;
}

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (char)loadListenerState:(id *)a0 withError:(id *)a1;
- (char)removeListenerState:(id)a0 withError:(id *)a1;
- (char)saveListenerState:(id)a0 withError:(id *)a1;

@end
