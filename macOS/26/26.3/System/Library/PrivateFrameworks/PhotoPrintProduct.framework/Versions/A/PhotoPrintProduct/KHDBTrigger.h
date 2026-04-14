@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface KHDBTrigger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_entries;
    int _firing;
}

- (id)init;
- (void)fire;
- (void)dealloc;
- (void)deregisterBlock:(id)a0;
- (void)registerBlock:(id /* block */)a0 onQueue:(id)a1 withKey:(id)a2;

@end
