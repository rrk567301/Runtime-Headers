@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {
    NSMutableArray *_contactObservers;
}

- (void)warmUp;
- (id)loadLexicons;
- (id)loadLexicons:(id /* block */)a0;
- (id /* block */)addNamedEntitiesUpdateObserver:(id /* block */)a0;
- (void)removeNamedEntitiesUpdateObserver:(id /* block */)a0;
- (void)hibernate;
- (void).cxx_destruct;
- (void)unloadLexicons;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (void)removeContactObserver:(id /* block */)a0;
- (id)init;
- (id)test_loadLexicons;

@end
