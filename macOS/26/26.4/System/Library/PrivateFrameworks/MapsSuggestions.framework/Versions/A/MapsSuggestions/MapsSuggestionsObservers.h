@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsObservers : NSObject <MapsSuggestionsObject> {
    NSString *_name;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _callbackQueue;
    NSHashTable *_innerObservers;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)callBlock:(id /* block */)a0;
- (BOOL)synchronouslyCallBlock:(id /* block */)a0;
- (id)initWithCallbackQueue:(id)a0 name:(id)a1 strong:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (unsigned long long)count;
- (id).cxx_construct;
- (void)registerObserver:(id)a0 handler:(id /* block */)a1;
- (void)unregisterObserver:(id)a0 handler:(id /* block */)a1;
- (id)initWithCallbackQueue:(id)a0 name:(id)a1;

@end
