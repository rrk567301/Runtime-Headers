@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CMIMetalEventSynchronizer : NSObject {
    NSMapTable *_events;
    NSObject<OS_dispatch_queue> *_modificationQueue;
}

+ (void)initialize;
+ (id)getSharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)signalEventOnCommandBuffer:(id)a0 forResource:(id)a1;
- (void)waitForEventOnCommandBuffer:(id)a0 forResource:(id)a1;

@end
