@class NSMapTable;

@interface VNObservationsCache : NSObject {
    NSMapTable *_observationsCache;
}

- (id)init;
- (void).cxx_destruct;
- (id)observationsForKey:(id)a0;
- (void)setObservations:(id)a0 forKey:(id)a1;
- (id)observationsAcceptedByRequest:(id)a0 testedKeyHandler:(id /* block */)a1;

@end
