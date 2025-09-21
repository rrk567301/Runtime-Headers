@class NSMapTable;

@interface SGCuratedChangeNotificationsBaseListener : NSObject {
    NSMapTable *_liveObserversMap;
}

- (void)stopListening;
- (void)startListening;
- (void)fire;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id /* block */)a0 forObjectLifetime:(id)a1;

@end
