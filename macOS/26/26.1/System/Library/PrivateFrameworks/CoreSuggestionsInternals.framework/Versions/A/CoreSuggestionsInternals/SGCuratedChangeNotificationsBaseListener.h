@class NSMapTable;

@interface SGCuratedChangeNotificationsBaseListener : NSObject {
    NSMapTable *_liveObserversMap;
}

- (void)stopListening;
- (void)fire;
- (void)startListening;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver:(id /* block */)a0 forObjectLifetime:(id)a1;

@end
