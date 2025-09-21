@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ULDarwinNotificationHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *registrations;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (void)removeObserverForNotificationName:(id)a0;
- (id)init;
- (void)_handleDarwinNotificationCallback:(id)a0;
- (void)addObserverForNotificationName:(id)a0 handler:(id /* block */)a1;
- (unsigned long long)stateForNotificationName:(id)a0;
- (void).cxx_destruct;

@end
