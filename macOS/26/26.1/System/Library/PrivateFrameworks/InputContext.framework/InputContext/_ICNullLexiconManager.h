@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {
    NSMutableArray *_contactObservers;
}

- (void)warmUp;
- (void)removeContactObserver:(id /* block */)a0;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (id /* block */)addNamedEntitiesUpdateObserver:(id /* block */)a0;
- (void)hibernate;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (void)removeNamedEntitiesUpdateObserver:(id /* block */)a0;
- (void)unloadLexicons;
- (id)loadLexicons;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void).cxx_destruct;
- (id)loadLexicons:(id /* block */)a0;
- (id)init;
- (id)test_loadLexicons;

@end
