@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CSSearchableIndexAsyncProcessor : NSObject {
    NSString *_processorName;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)indexSearchableItemsAsync:(id)a0 protectionClass:(id)a1 bundleIdentifier:(id)a2 indexOptions:(long long)a3 completion:(id /* block */)a4;

@end
