@class NSMapTable;

@interface SGCuratedChangeNotificationsBaseListener : NSObject {
    NSMapTable *_liveObserversMap;
}

- (void)fire;
- (void)stopListening;
- (void)startListening;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addObserver:(id /* block */)a0 forObjectLifetime:(id)a1;

@end
