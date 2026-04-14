@class PVContext, NSMutableArray;

@interface PVEventManager : NSObject {
    NSMutableArray *_notificationListeners;
    PVContext *_context;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addNotificationListener:(id)a0;
- (void)removeNotificationListener:(id)a0;
- (void)publishEvent:(id)a0 source:(id)a1;
- (void)notifyListeners:(id)a0;

@end
