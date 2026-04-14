@class NSMapTable;

@interface SGCuratedChangeNotificationsBaseListener : NSObject {
    NSMapTable *_liveObserversMap;
}

- (id)init;
- (void)stopListening;
- (void)startListening;
- (void).cxx_destruct;
- (void)fire;
- (void)dealloc;
- (void)addObserver:(id /* block */)a0 forObjectLifetime:(id)a1;

@end
