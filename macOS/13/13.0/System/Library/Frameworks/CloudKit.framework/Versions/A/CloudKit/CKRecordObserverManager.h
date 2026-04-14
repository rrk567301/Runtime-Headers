@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CKRecordObserverManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_recordObservers;
}

@property (class, readonly) CKRecordObserverManager *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)addRecordObserver:(id)a0 block:(id /* block */)a1;
- (void)removeRecordObserver:(id)a0;
- (void)handleRecordChange:(id)a0 container:(id)a1 completionHandler:(id /* block */)a2;

@end
